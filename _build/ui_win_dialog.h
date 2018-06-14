/********************************************************************************
** Form generated from reading UI file 'win_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_DIALOG_H
#define UI_WIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Win_dialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *text_section_name;
    QLabel *label_section;
    QHBoxLayout *horizontalLayout;
    QLineEdit *text_name_param;
    QLabel *label;
    QLineEdit *text_value_param;
    QLabel *label_param;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *text_name_string;
    QLabel *label_commit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *But_cancel;
    QPushButton *But_OK;

    void setupUi(QDialog *Win_dialog)
    {
        if (Win_dialog->objectName().isEmpty())
            Win_dialog->setObjectName(QStringLiteral("Win_dialog"));
        Win_dialog->resize(340, 161);
        Win_dialog->setMaximumSize(QSize(16777215, 165));
        gridLayout_2 = new QGridLayout(Win_dialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(Win_dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        text_section_name = new QLineEdit(Win_dialog);
        text_section_name->setObjectName(QStringLiteral("text_section_name"));
        text_section_name->setEnabled(true);
        text_section_name->setReadOnly(false);

        horizontalLayout_4->addWidget(text_section_name);

        label_section = new QLabel(Win_dialog);
        label_section->setObjectName(QStringLiteral("label_section"));

        horizontalLayout_4->addWidget(label_section);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        text_name_param = new QLineEdit(Win_dialog);
        text_name_param->setObjectName(QStringLiteral("text_name_param"));
        text_name_param->setEnabled(true);
        text_name_param->setReadOnly(false);

        horizontalLayout->addWidget(text_name_param);

        label = new QLabel(Win_dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(10, 16));
        label->setMaximumSize(QSize(15, 16));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        text_value_param = new QLineEdit(Win_dialog);
        text_value_param->setObjectName(QStringLiteral("text_value_param"));
        text_value_param->setEnabled(true);
        text_value_param->setReadOnly(false);

        horizontalLayout->addWidget(text_value_param);

        label_param = new QLabel(Win_dialog);
        label_param->setObjectName(QStringLiteral("label_param"));

        horizontalLayout->addWidget(label_param);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        text_name_string = new QLineEdit(Win_dialog);
        text_name_string->setObjectName(QStringLiteral("text_name_string"));
        text_name_string->setEnabled(true);
        text_name_string->setReadOnly(false);

        horizontalLayout_2->addWidget(text_name_string);

        label_commit = new QLabel(Win_dialog);
        label_commit->setObjectName(QStringLiteral("label_commit"));

        horizontalLayout_2->addWidget(label_commit);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        But_cancel = new QPushButton(Win_dialog);
        But_cancel->setObjectName(QStringLiteral("But_cancel"));

        horizontalLayout_3->addWidget(But_cancel);

        But_OK = new QPushButton(Win_dialog);
        But_OK->setObjectName(QStringLiteral("But_OK"));

        horizontalLayout_3->addWidget(But_OK);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Win_dialog);
        QObject::connect(But_cancel, SIGNAL(clicked()), Win_dialog, SLOT(close()));
        QObject::connect(But_OK, SIGNAL(clicked()), Win_dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(Win_dialog);
    } // setupUi

    void retranslateUi(QDialog *Win_dialog)
    {
        Win_dialog->setWindowTitle(QApplication::translate("Win_dialog", "New item", nullptr));
        label_2->setText(QApplication::translate("Win_dialog", "Add new item", nullptr));
        label_section->setText(QApplication::translate("Win_dialog", "Section Name", nullptr));
        label->setText(QApplication::translate("Win_dialog", "=", nullptr));
        label_param->setText(QApplication::translate("Win_dialog", "Param = Value", nullptr));
        label_commit->setText(QApplication::translate("Win_dialog", "String", nullptr));
        But_cancel->setText(QApplication::translate("Win_dialog", "Cancel", nullptr));
        But_OK->setText(QApplication::translate("Win_dialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Win_dialog: public Ui_Win_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_DIALOG_H
