/********************************************************************************
** Form generated from reading UI file 'recordswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDSWIDGET_H
#define UI_RECORDSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RecordsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *NameLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *CancelButton;
    QPushButton *OkButton;

    void setupUi(QDialog *RecordsWidget)
    {
        if (RecordsWidget->objectName().isEmpty())
            RecordsWidget->setObjectName(QString::fromUtf8("RecordsWidget"));
        RecordsWidget->resize(260, 130);
        RecordsWidget->setMaximumSize(QSize(260, 130));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bulls.png"), QSize(), QIcon::Normal, QIcon::Off);
        RecordsWidget->setWindowIcon(icon);
        RecordsWidget->setStyleSheet(QString::fromUtf8("QDialog{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(245, 190, 79, 255), stop:1 rgba(162, 69, 61, 255))}\n"
"QPushButton{\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(162, 69, 61, 255), stop:1 rgba(137, 49, 42, 255));\n"
"	border:  3px solid #89312a;\n"
"	padding:4px;\n"
"	border-radius:10px;\n"
"	color:#faf6ed;\n"
"	font: 9pt \"Century Gothic\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(162, 69, 61, 200), stop:1 rgba(137, 49, 42, 200));\n"
"	border:  3px solid rgba(137, 49, 42, 200);\n"
"	padding:4px;\n"
"	border-radius:10px;\n"
"	color:#faf6ed;\n"
"	font: 9pt \"Century Gothic\";\n"
"}\n"
"QPushButton:disabled{\n"
"	background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(162, 69, 61, 150), stop:1 rgba(137, 49, 42, 150));\n"
"	border:  3px solid #89312a;\n"
"	padding:4px;\n"
"	border-radius:10px;\n"
"	color: rgba(250, 246,"
                        " 237, 150);\n"
"	font: 9pt \"Century Gothic\";\n"
"}"));
        gridLayout = new QGridLayout(RecordsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(RecordsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        NameLine = new QLineEdit(RecordsWidget);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        NameLine->setFont(font);
        NameLine->setCursor(QCursor(Qt::IBeamCursor));
        NameLine->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 100);\n"
"border: 2px solid rgba(0, 0, 0, 50);\n"
"color:#faf6ed;"));

        gridLayout->addWidget(NameLine, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CancelButton = new QPushButton(RecordsWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        horizontalLayout->addWidget(CancelButton);

        OkButton = new QPushButton(RecordsWidget);
        OkButton->setObjectName(QString::fromUtf8("OkButton"));

        horizontalLayout->addWidget(OkButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(RecordsWidget);

        QMetaObject::connectSlotsByName(RecordsWidget);
    } // setupUi

    void retranslateUi(QDialog *RecordsWidget)
    {
        RecordsWidget->setWindowTitle(QCoreApplication::translate("RecordsWidget", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        label->setText(QCoreApplication::translate("RecordsWidget", "Name:", nullptr));
        CancelButton->setText(QCoreApplication::translate("RecordsWidget", "Cancel", nullptr));
        OkButton->setText(QCoreApplication::translate("RecordsWidget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordsWidget: public Ui_RecordsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDSWIDGET_H
