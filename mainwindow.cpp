#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ini_file.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Ini_edit_obj(new Ini_file)
{
    ui->setupUi(this);
    SetDefault();

    /*if(Ini_edit_obj->load("C:\\Users\\gorel\\Documents\\Qt_projects\\INI_edit\\my_ini.ini")){
        drow_section_field(Section,nullptr);
    }*/

}

void MainWindow::drow_section_field(int state, const QString& str){
    if(state == Section){//add sections on the gui
        ui->treeWidget->clear();
        //QString *str  = ;
        const char* ch;
        string buf;
        buf.clear();
        ch = Ini_edit_obj->get_string_ptr()->c_str();
        for(uint32_t i(0); i<strlen(ch); i++){
            if(ch[i] == '\n'){
                if(buf.size()>0) {
                    QTreeWidgetItem *t = new QTreeWidgetItem;
                    t->setText (0, QString::fromStdString(buf));
                    t->setExpanded(true);
                    ui->treeWidget->addTopLevelItem(t);
                    buf.clear();
                }
            }
            else buf += ch[i];
        }
        ui->treeWidget->setEnabled(1);
        ui->but_add_s->setEnabled(1);
        ui->treeWidget_2->clear();
        ui->treeWidget_2->setEnabled(0);
        ui->but_add->setEnabled(0);
        ui->but_del_s->setEnabled(0);
    }

    else if(state == Params){//add params on the gui
        char buf[4096];
        int fact_count=0;
        QString S;
        if(Ini_edit_obj->get_param(str.toStdString().c_str(), nullptr, 4096, &fact_count, &buf[0])){
            qDebug() << "on_treeWidget_itemClicked = 1";
            for(int i(0); i<fact_count; i++){
                S.clear();
                if(buf[i] == '\n'){
                    //add empty string
                }
                else
                while(buf[i] != '\n'){
                    S.append(buf[i]);
                    i++;
                }
                QTreeWidgetItem *t = new QTreeWidgetItem;
                t->setText (0, S);
                t->setExpanded(true);
                ui->treeWidget_2->addTopLevelItem(t);
            }

        } else qDebug() << "on_treeWidget_itemClicked = 0";
    }
}

void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    ui->treeWidget_2->clear();
    drow_section_field(Params, item->text(column));
    ui->but_del->setEnabled(0);
    ui->but_del_s->setEnabled(1);
    ui->but_add->setEnabled(1);
    ui->treeWidget_2->setEnabled(1);
    set_group_box_default();
}

void MainWindow::set_group_box_default(){
    ui->text_value_param->setEnabled(0);
    ui->text_name_param->clear();
    ui->text_value_param->clear();
    ui->text_string->clear();
    ui->text_name_param->setEnabled(0);

    ui->text_string->setEnabled(0);
    ui->label_Enter->setEnabled(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Ini_edit_obj;
}



void MainWindow::on_treeWidget_2_itemClicked(QTreeWidgetItem *item, int column)
{
    ui->but_del->setEnabled(1);
    string str = item->text(column).toStdString();
    QString buf;
    bool comment = 1;
    if(!str.empty()){
        const char *ch; ch = str.c_str();
        for(uint32_t simbols(0); simbols<strlen(ch); simbols++){
            if(ch[0] != ';' && ch[simbols] == '='){//name param = value param
                comment=0;
                ui->text_name_param->setEnabled(1);
                ui->text_value_param->setEnabled(1);
                ui->text_string->clear();
                ui->text_string->setEnabled(0);
                buf.clear();
                for(uint32_t j(0); j<simbols; j++) {
                    buf.append(ch[j]);
                    ui->text_name_param->setText(buf);
                }
                buf.clear();
                for(uint32_t j(++simbols); j<strlen(ch); j++){
                    buf.append(ch[j]);
                    ui->text_value_param->setText(buf);
                }
                //ui->text_value_param->setFocus();
                ui->label_Enter->setEnabled(0);
                break;
            }
        }
        if(comment){//string
            ui->text_name_param->clear();
            ui->text_value_param->clear();
            ui->text_name_param->setEnabled(0);
            ui->text_value_param->setEnabled(0);
            ui->text_string->setEnabled(1);
            buf.clear();

            for(uint32_t j(0); j<strlen(ch); j++) {
                buf.append(ch[j]);
                ui->text_string->setText(buf);
            }
            ui->label_Enter->setEnabled(0);
        }
    }
    else{
        ui->text_name_param->clear();
        ui->text_value_param->clear();
        ui->text_name_param->setEnabled(0);
        ui->text_value_param->setEnabled(0);
        ui->text_string->setEnabled(1);
        ui->label_Enter->setEnabled(0);
    }

}



void MainWindow::on_text_value_param_textChanged()
{
    ui->label_Enter->setEnabled(1);
}

void MainWindow::on_text_value_param_editingFinished()
{
    if(ui->text_value_param->isEnabled()){
        ui->label_Enter->setEnabled(0);
        //enter
        const char *section;
        const char *ch_value_param;
        const char *ch_name_param;
        section = ui->treeWidget->currentItem()->text(0).toStdString().c_str();
        ch_value_param = ui->text_value_param->text().toStdString().c_str();
        ch_name_param = ui->text_name_param->text().toStdString().c_str();

        if(ui->text_name_param->text() != "" && Ini_edit_obj->set_param(section, ch_name_param, ch_value_param)){
            qDebug() << "on_text_value_param_editingFinished = 1";
            emit ui->treeWidget->itemClicked(ui->treeWidget->currentItem(),0);
        }
        else qDebug() << "on_text_value_param_editingFinished = 0";
    }
}


void MainWindow::on_but_del_clicked()
{
    string Sec;//for long names
    const char *section;
    Sec = ui->treeWidget->currentItem()->text(0).toStdString();
    section = Sec.c_str();
    const char *ch_name_param;
    string Par;
    if(ui->text_name_param->isEnabled()){
        Par = ui->text_name_param->text().toStdString();
        ch_name_param = Par.c_str();
    }
    else {
        Par = ui->treeWidget_2->currentItem()->text(0).toStdString();
        ch_name_param = Par.c_str();

    }

    if(Ini_edit_obj->delete_param(section, ch_name_param)){
        qDebug() << "delete ok";
        emit ui->treeWidget->itemClicked(ui->treeWidget->currentItem(),0);
    }
    else{
        qDebug() << "delete error";
    }

}

void MainWindow::on_but_del_s_clicked()
{
    string Sec;//for long names
    const char *section;
    if(ui->treeWidget->currentItem()){
        Sec = ui->treeWidget->currentItem()->text(0).toStdString();
        section = Sec.c_str();

        if(Ini_edit_obj->delete_section(section)){
            qDebug() << "delete sec ok";
            drow_section_field(Section,nullptr);
        }
        else{
            qDebug() << "delete sec error";
        }
    }
}

void MainWindow::on_actionSave_file_triggered()
{
    QString str = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("INI files (*.ini);;Text Files (*.txt)"));
    if (str != "") {
        QFile file(str);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
        else{
            file.close();
            if(!Ini_edit_obj->store(str.toStdString().c_str())){
                QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            }
        }
    }



}

void MainWindow::on_but_add_clicked()
{
    Win_dialog WD(this,0);// = new enter_ip(this);
    connect(&WD,&Win_dialog::set_new_param,this, &MainWindow::set_new_param);

    WD.exec();
}

void MainWindow::on_but_add_s_clicked()
{
    Win_dialog WD(this,1);// = new enter_ip(this);
    connect(&WD,&Win_dialog::set_new_sect,this, &MainWindow::set_new_sect);

    WD.exec();
}

void MainWindow::set_new_param(const char * section, const char * param, const char * buf){
    if(ui->treeWidget->currentItem()){
        if(Ini_edit_obj->set_param(ui->treeWidget->currentItem()->text(0).toStdString().c_str(),param,buf))
            emit ui->treeWidget->itemClicked(ui->treeWidget->currentItem(),0);

    }
}

void MainWindow::set_new_sect(const char * section, const char * param, const char * buf){
    if(Ini_edit_obj->set_param(section,param,buf))
        drow_section_field(Section,nullptr);
}

void MainWindow::SetDefault(){
    ui->text_name_param->clear();
    ui->text_string->clear();
    ui->text_value_param->clear();

    ui->treeWidget->clear();
    ui->treeWidget_2->clear();
    ui->treeWidget->setEnabled(0);
    ui->treeWidget_2->setEnabled(0);
    ui->but_add->setEnabled(0);
    ui->but_add_s->setEnabled(0);
    ui->but_del->setEnabled(0);
    ui->but_del_s->setEnabled(0);
    ui->text_name_param->setEnabled(0);
    ui->text_string->setEnabled(0);
    ui->text_value_param->setEnabled(0);

}

void MainWindow::on_actionLoad_File_triggered()
{
    on_actionClear_triggered();
    //QString str = QFileDialog::getExistingDirectory(0, "Directory Dialog", "");
    QString str = QFileDialog::getOpenFileName(this, tr("Load File"), "", tr("INI files (*.ini);;Text Files (*.txt)"));
    if (str != "") {
        QFile file(str);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
        else{
            file.close();
            if(!Ini_edit_obj->load(str.toStdString().c_str())){
                QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            }
            else{
                drow_section_field(Section,nullptr);
            }
        }
    }
}

void MainWindow::on_actionClear_triggered()
{
    Ini_edit_obj->clear();
    this->SetDefault();
}
