/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *TableRecordsButton;
    QPushButton *NewGameButton;
    QPushButton *ProofButton;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 600);
        MainWindow->setMinimumSize(QSize(600, 600));
        QFont font;
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bulls.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(245, 190, 79, 255), stop:1 rgba(162, 69, 61, 255))}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"	color: rgba(250, 246, 237, 150);\n"
"	font: 9pt \"Century Gothic\";\n"
"}\n"
"QLabel{\n"
"	\n"
"	color: rgb(81, 62, 31);\n"
"	font: 700 9pt \"Century Gothic\";\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setKerning(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgba(0, 0, 0, 50);\n"
"border: 2px solid rgba(0, 0, 0, 25);\n"
"color:#faf6ed}\n"
"QLineEdit:enabled{background-color: rgba(0, 0, 0, 100);\n"
"border: 2px solid rgba(0, 0, 0, 50);\n"
"color:#faf6ed}"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        TableRecordsButton = new QPushButton(centralwidget);
        TableRecordsButton->setObjectName(QString::fromUtf8("TableRecordsButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        TableRecordsButton->setFont(font2);
        TableRecordsButton->setStyleSheet(QString::fromUtf8("color: rgb(249, 246, 237);"));

        gridLayout->addWidget(TableRecordsButton, 0, 2, 1, 1);

        NewGameButton = new QPushButton(centralwidget);
        NewGameButton->setObjectName(QString::fromUtf8("NewGameButton"));
        NewGameButton->setFont(font2);
        NewGameButton->setStyleSheet(QString::fromUtf8("color: rgb(249, 246, 237);"));

        gridLayout->addWidget(NewGameButton, 0, 0, 1, 1);

        ProofButton = new QPushButton(centralwidget);
        ProofButton->setObjectName(QString::fromUtf8("ProofButton"));
        ProofButton->setFont(font2);
        ProofButton->setCursor(QCursor(Qt::ArrowCursor));
        ProofButton->setStyleSheet(QString::fromUtf8("color: rgb(249, 246, 237);"));

        gridLayout->addWidget(ProofButton, 2, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QBrush brush(QColor(76, 73, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Gothic"));
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font3);
        __qtablewidgetitem->setBackground(QColor(210, 205, 194));
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font3);
        __qtablewidgetitem1->setBackground(QColor(210, 205, 194));
        __qtablewidgetitem1->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget { background-color: #faf6ed; alternate-background-color: #ede9df; gridline-color: #ede9df; color: #513e1f; selection-background-color: #e0dcd1; selection-color: #44341a;}\n"
"QHeaderView::section:vertical { border:none; margin-left: 10%; background-color:#ede9df}\n"
"QHeaderView::section:horizontal { border:2px; margin-botton: 10%; background-color:#ede9df}"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget->horizontalHeader()->setDefaultSectionSize(287);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(tableWidget);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgba(255, 162, 12, 200);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\221\321\213\320\272\320\270 \320\270 \320\272\320\276\321\200\320\276\320\262\321\213", nullptr));
        TableRecordsButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\320\276\321\200\320\264\321\213", nullptr));
        NewGameButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        ProofButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\260\320\271\321\202\320\265 \321\201\321\213\320\263\321\200\320\260\320\265\320\274 \320\262 \320\270\320\263\321\200\321\203!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\207\320\270\321\201\320\273\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "mady by danii\305\202 \305\276arnasiek", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
