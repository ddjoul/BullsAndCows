/********************************************************************************
** Form generated from reading UI file 'tablerecordswindget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLERECORDSWINDGET_H
#define UI_TABLERECORDSWINDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TableRecordsWindget
{
public:

    void setupUi(QDialog *TableRecordsWindget)
    {
        if (TableRecordsWindget->objectName().isEmpty())
            TableRecordsWindget->setObjectName(QString::fromUtf8("TableRecordsWindget"));
        TableRecordsWindget->resize(400, 300);

        retranslateUi(TableRecordsWindget);

        QMetaObject::connectSlotsByName(TableRecordsWindget);
    } // setupUi

    void retranslateUi(QDialog *TableRecordsWindget)
    {
        TableRecordsWindget->setWindowTitle(QCoreApplication::translate("TableRecordsWindget", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableRecordsWindget: public Ui_TableRecordsWindget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLERECORDSWINDGET_H
