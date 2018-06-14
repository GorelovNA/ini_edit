#include "ini_file.h"
//#include <QDebug>

Ini_file::Ini_file ():   
    cnt_sections(0),
    cnt_strings(0)
{

}

/// очистка КФ
void Ini_file::clear(){
    if(cnt_sections>0) delete [] buffer;
    cnt_strings = 0;
    cnt_sections = 0;
    sectors_name.clear();

}

/// загрузка КФ (file_name - имя файла)
/// возвращает true в случае успеха и false если произошла ошибка;
bool Ini_file::load(const char * file_name){
    File.open(file_name,ios::in);
    //qDebug() << File.is_open();
    if(File.is_open()){
        parse_file();
        File.close();
        return 1;
    }
    return 0;

}

void Ini_file::parse_file(){
    cnt_strings = 0;//set 0
    /*size_mass = File.seekg(0,ios::end).tellg();//sizeof file (bytes)
    File.seekg(0,ios::beg);
    mas_ini = new char[size_mass];
    File.read(mas_ini,size_mass);*/

    /*char c;
    int real_size=0;
    while(File >> c){
        mas_ini[real_size] = c;
        real_size++;
        qDebug() << c;
    }*/

    string a;
    while(getline(File, a)){    //get cnt strings
        cnt_strings++;
        //qDebug() << S;
    }

    buffer = new string[cnt_strings+1000];//create mem for strings
    File.clear();
    File.seekg(0,ios::beg);
    uint32_t i=0;
    while(getline(File, buffer[i])){//read strings
        i++;
        if(i>cnt_strings) break; //detection
    }


    /*for(int i(0); i<cnt_strings; i++)
        qDebug() << buffer[i].c_str();*/

}

const string* Ini_file::get_string_ptr(){
    sectors_name.clear();
    const string *str; str = &buffer[0];
    const char* ch;
    uint32_t simbols=0;

    for(uint32_t i(0); i<cnt_strings; i++){
        ch = str->c_str();
        for(simbols=0; simbols < strlen(ch); simbols++){
            if(ch[simbols] == ' ') simbols++;//probels isnt problem
            else if(ch[simbols] == '['){//add, if string is a name of section
                cnt_sections += 1;
                sectors_name += *str;
                sectors_name += "\n";
            }
            else break;
        }

        str++;
    }

    return &sectors_name;
}

/// сохранение КФ (file_name - имя файла)
/// возвращает true в случае успеха и false если произошла ошибка;
bool Ini_file::store(const char * file_name){
    ofstream fout(file_name);
    if(fout.is_open()){
        for(uint32_t i(0); i<cnt_strings; i++){
            fout << buffer[i] << endl;
        }
        fout.close();
        return 1;
    }
    else return 0;

}

/* функции работы с секциями КФ */

/// возвращает число секций
int Ini_file::get_section_count() const {
    return cnt_sections;
}

/* функции работы с параметрами КФ */
// Установить/добавить параметр
// 1. если существует, то изменить значение
// 2. если не существует, но секция найдена, то добавить в конец секции
// 3. если не существует, и секция не найдена, то добавить в конец секцию с этим параметром

/// пишет строку buf в параметр param секции section
bool Ini_file::set_param(const char * section, const char * param, const char * buf){
    string str; str.append(section);
    string st_buf;

    if(section==nullptr){
        return 0; //error, section name isnt declarate
    }

    for(uint32_t i(0); i<cnt_strings; i++){
        if(str == buffer[i]){//find sector in the buffer
            uint32_t end_sec = found_end_sec(i);//find end of section in the buffer
            uint32_t sym=0;
            i++;
            if(param == nullptr){//commit or string
                str.clear();
                str = buf;
                add_new_str(end_sec, str);
                return 1;
            }

            while(sym<strlen(param) && i<end_sec){//find param
                if(strlen(buffer[i].c_str())>sym && buffer[i].c_str()[sym] == param[sym]){
                    sym+=1;
                    if(sym == strlen(param)){//param was found
                        const char *ch; ch = buffer[i].c_str();
                        for(uint32_t s(0); s < strlen(ch); s++){
                            if(ch[s]=='='){
                                if(param != st_buf){//param isnt right, add new
                                    str.clear();
                                    str = param;
                                    str += "=";
                                    str += buf;
                                    add_new_str(end_sec, str);
                                    return 1;
                                }
                                st_buf += '=';
                                st_buf.append(buf);
                                buffer[i] = st_buf;
                                break;
                            }
                            else {
                                st_buf += ch[s];
                            }
                        }
                        return 1;
                    }                    
                }
                else i++;
            }            

            str.clear();//add new string into the section
            /*if(param==nullptr) //string or commit
                str = buf;
            else {//param*/
                str = param;
                str += "=";
                str += buf;
            //}
            add_new_str(i, str);
            return 1;
        }
    }
    //add new sector
    str = section;
    add_new_str(cnt_strings, str);
    cnt_sections++;
    if(param == nullptr){//commit or string
        if(buf!=nullptr){
            str.clear();
            str = buf;
            add_new_str(cnt_strings, str);
        }
    }
    else{
        str.clear();
        str = param;
        str += "=";
        str += buf;
        add_new_str(cnt_strings, str);
    }


    return 1;

}

void Ini_file::add_new_str(const uint32_t& i, const string& str){
    for(uint32_t j(cnt_strings); j >= i; j--){
        buffer[j] = buffer[j-1];
    }
    buffer[i].clear();

    buffer[i] = str;
    cnt_strings++;
}

uint32_t Ini_file::found_end_sec(const uint32_t& i){
    if(i==cnt_strings-1) return (i+1);//empty section

    const string *str; str = &buffer[i+1];
    const char* ch;
    uint32_t simbols=0;

    for(uint32_t j(i+1); j<cnt_strings; j++){
        ch = str->c_str();
        for(simbols=0; simbols < strlen(ch); simbols++){
            if(ch[simbols] == ' ') simbols++;//probels isnt problem
            else if(ch[simbols] == '['){//add, if string is a name of section
                return j;
            }
            else break;
        }
        if(j==(cnt_strings-1))
            return j+1;
        str++;
    }
    return 0;
}

/// читает в buf строку (массив чисел) из параметра param секции section
/// max_buf_size : размер буфера для чтения строки
/// need_count: кол-во элементов для чтения массива чисел
/// fact_count : размер прочитанной строки
/// возвращает true в случае успеха и false если произошла ошибка;
bool Ini_file::get_param(const char * section, const char * param, int max_buf_size, int * fact_count, char * buf){
    if(param == nullptr){//show all section

        for(uint32_t i(0); i<cnt_strings; i++){
            if(buffer[i] == section){
                const char* ch;
                uint32_t end_sec = found_end_sec(i);
                i++;
                for(;i<end_sec;i++){//found strings in section
                    if(buffer[i].empty()){//add empty string to buf
                        if(*fact_count<max_buf_size){
                            *buf = '\n';
                            buf++;
                            *fact_count+=1;
                        }
                        else  return 0;//overwrite detection
                        //qDebug() << ch;
                        //break;
                    }
                    else{//add string to buf
                        ch = buffer[i].c_str();
                        for(uint32_t j(0); j<strlen(ch); j++){
                            if(*fact_count<max_buf_size){
                                *buf = ch[j];
                                buf++;
                                *fact_count+=1;
                            } else  return 0;//overwrite detection
                        }
                        if(*fact_count<max_buf_size){
                            *buf = '\n';
                            buf++;
                            *fact_count+=1;
                        } else  return 0;//overwrite detection
                    }
                }
                return 1;
            }
        }
        return 0;
    }
    return 0;
}

/// удаляет секцию с именем section и все ее содержимое
bool Ini_file::delete_section(const char * section){
    //TODO!!! add seach param func
    string str; str.append(section);

    //TODO!!! add seach param func

    for(uint32_t i(0); i<cnt_strings; i++){
        if(str == buffer[i]){//find sector in buffer
            uint32_t str_to_del = 0;
            const char *ch;

            if(i==cnt_strings-1){//if section is empty
                buffer[i].clear();
                cnt_strings--;
                cnt_sections--;
                return 1;
            }
            else{
                for(uint32_t j(i+1); j < cnt_strings; j++){
                    ch = buffer[j].c_str();
                    //if(buffer[j].empty()) str_to_del++; //if str is empty
                    for(uint32_t simbols=0; simbols < strlen(ch); simbols++){
                        if(ch[simbols] == ' '){ simbols++;}//probels isnt problem
                        else if(ch[simbols] == '[' || j==(cnt_strings-1)){//end of sec/ delete str_to_del strings
                            j=cnt_strings;
                            break;
                        }
                        else break;
                    }
                    str_to_del++;
                }

                if(str_to_del>0){
                    for(i; i < cnt_strings-str_to_del; i++){
                        buffer[i] = buffer[i+str_to_del];
                        buffer[i+str_to_del].clear();
                    }
                    cnt_strings -= str_to_del;
                    cnt_sections--;

                    return 1;
                }
            }
        }
    }
    return 0;

}

/// удаляет параметр param из секции section
bool Ini_file::delete_param(const char * section, const char * param){
    string str; str.append(section);

    //TODO!!! add seach param func

    for(uint32_t i(0); i<cnt_strings; i++){
        if(str == buffer[i]){//find sector in buffer

            if(strlen(param) == 0){ //empty string
                uint32_t end_sec = found_end_sec(i);
                for(uint32_t j(i+1); j<end_sec; j++){
                    if(buffer[j].empty()){
                        //delete str
                        cnt_strings--;
                        for(uint32_t c_str(j); c_str < cnt_strings; c_str++){
                            buffer[c_str]=buffer[c_str+1];
                        }
                        buffer[cnt_strings].clear();
                        return 1;
                    }
                }
                return 0;
            }

            uint32_t sym=0;
            i++;
            while(sym<strlen(param) && i<cnt_strings){//detection
                if(strlen(buffer[i].c_str())>sym && buffer[i].c_str()[sym] == param[sym]){
                    sym+=1;
                    if(sym == strlen(param)){//param fined
                        //delete str
                        cnt_strings--;
                        for(uint32_t c_str(i); c_str < cnt_strings; c_str++){
                            buffer[c_str]=buffer[c_str+1];
                        }
                        buffer[cnt_strings].clear();

                        return 1;
                    }
                }
                else i++;
            }
        }
    }
    return 0;
}
