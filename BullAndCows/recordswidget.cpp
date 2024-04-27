#include "recordswidget.h"
#include "ui_recordswidget.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QDebug>

RecordsWidget::RecordsWidget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RecordsWidget)
{
    ui->setupUi(this);
}

RecordsWidget::~RecordsWidget()
{
    delete ui;
}

void RecordsWidget::on_CancelButton_clicked()
{
    close();
}


void RecordsWidget::on_OkButton_clicked()
{
    if(ui->NameLine->text().isEmpty()){
        QMessageBox::critical(this, "Ошибка", "Имя не введенно!");
    }
    else{
        RecordsArray[1] = ui->NameLine->text();
        QFile file("../../records_file.txt");
        if (!file.open(QIODevice::Append | QIODevice::Text)) QMessageBox::critical(this, "Error", "Не существует файла для ввода текста");
        else{
        QTextStream out(&file);
        out << RecordsArray[0] + "." + RecordsArray[1] << "\n";
        file.close();
        close();
        }
    }
}

void RecordsWidget::slot(QString a)
{
    RecordsArray[0] = a;
}


void RecordsWidget::on_NameLine_returnPressed()
{
    ui->OkButton->click();
}

