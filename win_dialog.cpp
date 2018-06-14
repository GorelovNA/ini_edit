#include "win_dialog.h"
#include "ui_win_dialog.h"

Win_dialog::Win_dialog(QWidget *parent, bool state) :
    QDialog(parent),
    ui(new Ui::Win_dialog)
{
    ui->setupUi(this);
    diag_state = state;
    if(diag_state == section){
        ui->text_section_name->setVisible(1);
        ui->label_section->setVisible(1);
        ui->text_name_param->setEnabled(0);
        ui->text_value_param->setEnabled(0);
        ui->text_name_string->setEnabled(0);
    }
    else{
        ui->text_section_name->setVisible(0);
        ui->label_section->setVisible(0);
    }
}

Win_dialog::~Win_dialog()
{
    delete ui;
}

void Win_dialog::on_text_name_string_textChanged(const QString &arg1)
{
    if(arg1 == ""){
        ui->text_name_param->setEnabled(1);
        ui->text_value_param->setEnabled(1);
    }
    else{
        ui->text_name_param->setEnabled(0);
        ui->text_value_param->setEnabled(0);
    }

}

void Win_dialog::on_text_name_param_textChanged(const QString &arg1)
{ 
    if(arg1.isEmpty() && ui->text_value_param->text().isEmpty()){
        ui->text_name_string->setEnabled(1);
        ui->But_OK->setEnabled(1);
    }
    else{
        if(!ui->text_value_param->text().isEmpty() && !arg1.isEmpty())
            ui->But_OK->setEnabled(1);
        else ui->But_OK->setEnabled(0);
        ui->text_name_string->setEnabled(0);
    }

}

void Win_dialog::on_text_value_param_textChanged(const QString &arg1)
{
    if(arg1.isEmpty() && ui->text_name_param->text().isEmpty()){
        ui->text_name_string->setEnabled(1);
        ui->But_OK->setEnabled(1);
    }
    else{
        if(!ui->text_name_param->text().isEmpty() && !arg1.isEmpty())
            ui->But_OK->setEnabled(1);
        else ui->But_OK->setEnabled(0);
        ui->text_name_string->setEnabled(0);
    }

}

void Win_dialog::on_But_OK_clicked()
{   
    if(diag_state == param){
        if(ui->text_name_param->text().isEmpty())
            emit set_new_param(nullptr, nullptr, ui->text_name_string->text().toStdString().c_str());
        else{
            if(!ui->text_name_param->text().isEmpty() && !ui->text_value_param->text().isEmpty())
                emit set_new_param(nullptr, ui->text_name_param->text().toStdString().c_str(),
                                   ui->text_value_param->text().toStdString().c_str());
        }
    }
    else{
        QString str;
        str = "["+ui->text_section_name->text()+"]";
        if(ui->text_name_param->text().isEmpty()){
            if(ui->text_name_string->text().isEmpty())
                emit set_new_sect(str.toStdString().c_str(),
                                   nullptr,
                                   nullptr);
            else
                emit set_new_sect(str.toStdString().c_str(),
                                   nullptr,
                                   ui->text_name_string->text().toStdString().c_str());
        }
        else
            emit set_new_sect(str.toStdString().c_str(),
                               ui->text_name_param->text().toStdString().c_str(),
                               ui->text_value_param->text().toStdString().c_str());

    }
}


void Win_dialog::on_text_section_name_textChanged(const QString &arg1)
{
    if(arg1.isEmpty()){
        ui->text_name_param->setEnabled(0);
        ui->text_value_param->setEnabled(0);
        ui->text_name_string->setEnabled(0);
    }
    else{
        ui->text_name_param->setEnabled(1);
        ui->text_value_param->setEnabled(1);
        ui->text_name_string->setEnabled(1);
    }
}
