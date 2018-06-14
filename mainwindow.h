#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ini_file.h>
#include <QTreeWidgetItem>
#include <win_dialog.h>

enum State{Section=0, Params=1};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

    void on_treeWidget_2_itemClicked(QTreeWidgetItem *item, int column);

    void on_text_value_param_textChanged();

    void on_text_value_param_editingFinished();

    void on_but_del_clicked();

    void on_but_del_s_clicked();

    void on_actionSave_file_triggered();

    void on_but_add_clicked();

    void set_new_param(const char * section, const char * param, const char * buf);
    void set_new_sect(const char * section, const char * param, const char * buf);

    void on_but_add_s_clicked();



    void on_actionLoad_File_triggered();

    void on_actionClear_triggered();

private:
    Ui::MainWindow *ui;
    Ini_file *Ini_edit_obj;
    void drow_section_field(int state, const QString & str);
    void set_group_box_default();
    void SetDefault();
};

#endif // MAINWINDOW_H
