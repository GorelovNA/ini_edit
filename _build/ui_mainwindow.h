/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_file;
    QAction *actionLoad_File;
    QAction *actionClear;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *but_add_s;
    QPushButton *but_del_s;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *but_add;
    QPushButton *but_del;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *text_name_param;
    QLabel *label;
    QLineEdit *text_value_param;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Enter;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *text_string;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1141, 679);
        MainWindow->setMinimumSize(QSize(1000, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSave_file = new QAction(MainWindow);
        actionSave_file->setObjectName(QStringLiteral("actionSave_file"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_file->setIcon(icon1);
        actionLoad_File = new QAction(MainWindow);
        actionLoad_File->setObjectName(QStringLiteral("actionLoad_File"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_File->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout_3->addWidget(treeWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        but_add_s = new QPushButton(centralWidget);
        but_add_s->setObjectName(QStringLiteral("but_add_s"));

        horizontalLayout_4->addWidget(but_add_s);

        but_del_s = new QPushButton(centralWidget);
        but_del_s->setObjectName(QStringLiteral("but_del_s"));
        but_del_s->setEnabled(false);

        horizontalLayout_4->addWidget(but_del_s);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        treeWidget_2 = new QTreeWidget(centralWidget);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        treeWidget_2->setEnabled(false);

        verticalLayout_2->addWidget(treeWidget_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        but_add = new QPushButton(centralWidget);
        but_add->setObjectName(QStringLiteral("but_add"));
        but_add->setEnabled(false);

        horizontalLayout_3->addWidget(but_add);

        but_del = new QPushButton(centralWidget);
        but_del->setObjectName(QStringLiteral("but_del"));
        but_del->setEnabled(false);

        horizontalLayout_3->addWidget(but_del);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(350, 161));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        text_name_param = new QLineEdit(groupBox);
        text_name_param->setObjectName(QStringLiteral("text_name_param"));
        text_name_param->setEnabled(false);
        text_name_param->setReadOnly(true);

        horizontalLayout->addWidget(text_name_param);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(10, 16));
        label->setMaximumSize(QSize(15, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        text_value_param = new QLineEdit(groupBox);
        text_value_param->setObjectName(QStringLiteral("text_value_param"));
        text_value_param->setEnabled(false);

        horizontalLayout->addWidget(text_value_param);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Enter = new QLabel(groupBox);
        label_Enter->setObjectName(QStringLiteral("label_Enter"));
        label_Enter->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Enter->sizePolicy().hasHeightForWidth());
        label_Enter->setSizePolicy(sizePolicy1);
        label_Enter->setMinimumSize(QSize(61, 16));

        horizontalLayout_2->addWidget(label_Enter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        text_string = new QLineEdit(groupBox);
        text_string->setObjectName(QStringLiteral("text_string"));
        text_string->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(text_string->sizePolicy().hasHeightForWidth());
        text_string->setSizePolicy(sizePolicy2);
        text_string->setReadOnly(true);

        horizontalLayout_5->addWidget(text_string);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 416, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_7->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1141, 20));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionLoad_File);
        menuMenu->addAction(actionSave_file);
        menuMenu->addAction(actionClear);
        mainToolBar->addAction(actionLoad_File);
        mainToolBar->addAction(actionSave_file);
        mainToolBar->addAction(actionClear);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "INI editor", nullptr));
        actionSave_file->setText(QApplication::translate("MainWindow", "Save File", nullptr));
        actionLoad_File->setText(QApplication::translate("MainWindow", "Open File", nullptr));
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Section name", nullptr));
        but_add_s->setText(QApplication::translate("MainWindow", "New", nullptr));
        but_del_s->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_2->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Section items", nullptr));
        but_add->setText(QApplication::translate("MainWindow", "New", nullptr));
        but_del->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Edit view", nullptr));
        label->setText(QApplication::translate("MainWindow", "=", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Param=Value", nullptr));
        label_Enter->setText(QApplication::translate("MainWindow", "Press ENTER", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "String", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
