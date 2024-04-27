/********************************************************************************
** Form generated from reading UI file 'tablerecordswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLERECORDSWIDGET_H
#define UI_TABLERECORDSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TableRecordsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *ResetButton;

    void setupUi(QDialog *TableRecordsWidget)
    {
        if (TableRecordsWidget->objectName().isEmpty())
            TableRecordsWidget->setObjectName(QString::fromUtf8("TableRecordsWidget"));
        TableRecordsWidget->resize(500, 300);
        TableRecordsWidget->setMinimumSize(QSize(500, 300));
        TableRecordsWidget->setMaximumSize(QSize(500, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bulls.png"), QSize(), QIcon::Normal, QIcon::Off);
        TableRecordsWidget->setWindowIcon(icon);
        TableRecordsWidget->setStyleSheet(QString::fromUtf8("QDialog{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(245, 190, 79, 255), stop:1 rgba(162, 69, 61, 255))}\n"
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
        verticalLayout = new QVBoxLayout(TableRecordsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TableRecordsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#513e1f;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(TableRecordsWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        __qtablewidgetitem->setBackground(QColor(42, 143, 49, 0));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(61, 101, 34));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget { background-color: #faf6ed; alternate-background-color: #ede9df; gridline-color: #ede9df; color: #513e1f; selection-background-color: #e0dcd1; selection-color: #44341a;}\n"
"QHeaderView::section:vertical { border:none; margin-left: 10%; background-color:#ede9df}\n"
"QHeaderView::section:horizontal { border:2px; margin-botton: 10%; background-color:#ede9df}"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setMinimumSectionSize(48);
        tableWidget->horizontalHeader()->setDefaultSectionSize(206);

        verticalLayout->addWidget(tableWidget);

        ResetButton = new QPushButton(TableRecordsWidget);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));

        verticalLayout->addWidget(ResetButton);


        retranslateUi(TableRecordsWidget);

        QMetaObject::connectSlotsByName(TableRecordsWidget);
    } // setupUi

    void retranslateUi(QDialog *TableRecordsWidget)
    {
        TableRecordsWidget->setWindowTitle(QCoreApplication::translate("TableRecordsWidget", "\320\240\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
        label->setText(QCoreApplication::translate("TableRecordsWidget", "\320\240\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TableRecordsWidget", "\320\237\320\276\320\277\321\213\321\202\320\276\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TableRecordsWidget", "\320\230\320\274\321\217", nullptr));
        ResetButton->setText(QCoreApplication::translate("TableRecordsWidget", "\320\236\320\261\320\275\321\203\320\273\320\270\321\202\321\214 \321\200\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableRecordsWidget: public Ui_TableRecordsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLERECORDSWIDGET_H
