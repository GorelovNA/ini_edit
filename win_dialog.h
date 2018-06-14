#ifndef WIN_DIALOG_H
#define WIN_DIALOG_H

#include <QDialog>

enum state_dialog{param=0,section=1};

namespace Ui {
class Win_dialog;
}

class Win_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Win_dialog(QWidget *parent = 0, bool state=0);
    ~Win_dialog();

private slots:
    void on_text_name_string_textChanged(const QString &arg1);

    void on_text_name_param_textChanged(const QString &arg1);

    void on_text_value_param_textChanged(const QString &arg1);

    void on_But_OK_clicked();


    void on_text_section_name_textChanged(const QString &arg1);

private:
    Ui::Win_dialog *ui;
    bool diag_state;

signals:
    void set_new_param(const char * section, const char * param, const char * buf);
    void set_new_sect(const char * section, const char * param, const char * buf);
};

#endif // WIN_DIALOG_H
