#ifndef INI_FILE_H
#define INI_FILE_H

#include <fstream>
#include <string.h>

using namespace std;

class Ini_file
{
private:
    std::ifstream File;
    int cnt_sections;
    string sectors_name;
    uint32_t cnt_strings;

    string *buffer;

    uint32_t found_end_sec(const uint32_t& i);
    void add_new_str(const uint32_t& i, const string& str);
    void parse_file();

public:

    Ini_file ();
    virtual ~ Ini_file(){ delete [] buffer; }


    const string* get_string_ptr();//gui get sectors list

    /// очистка КФ
    void clear();

    /// загрузка КФ (file_name - имя файла)
    /// возвращает true в случае успеха и false если произошла ошибка;
    bool load(const char * file_name);

    /// сохранение КФ (file_name - имя файла)
    /// возвращает true в случае успеха и false если произошла ошибка;
    bool store(const char * file_name);

    /* функции работы с секциями КФ */

    /// возвращает число секций
    int get_section_count() const ;
    /// удаляет секцию с именем section и все ее содержимое
    bool delete_section(const char * section);

    /* функции работы с параметрами КФ */
    // Установить/добавить параметр
    // 1. если существует, то изменить значение
    // 2. если не существует, но секция найдена, то добавить в конец секции
    // 3. если не существует, и секция не найдена, то добавить в конец секцию с этим параметром

    /// пишет строку buf в параметр param секции section
    bool set_param(const char * section, const char * param, const char * buf);
    /// пишет массив целых чисел buf[0..count-1] в параметр param секции section

//overloading unnecessary
    //bool set_param(const char * section, const char * param, int count, const int * buf);
    /// пишет массив чисел c плавающей точкой buf[0..count-1] в параметр param секции section
//overloading unnecessary
    //bool set_param(const char * section, const char * param, int count, const double * buf);

    /// читает в buf строку (массив чисел) из параметра param секции section
    /// max_buf_size : размер буфера для чтения строки
    /// need_count: кол-во элементов для чтения массива чисел
    /// fact_count : размер прочитанной строки
    /// возвращает true в случае успеха и false если произошла ошибка;
    bool get_param(const char * section, const char * param, int max_buf_size, int * fact_count, char * buf);

//overloading unnecessary
    //bool get_param(const char * section, const char * param, int need_count, int * fact_count, int * buf);
    //bool get_param(const char * section, const char * param, int need_count, int * fact_count, double * buf);

    /// удаляет параметр param из секции section
    bool delete_param(const char * section, const char * param);

};

#endif // INI_FILE_H
