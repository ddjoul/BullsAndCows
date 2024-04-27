#include "tablerecordswidget.h"
#include "ui_tablerecordswidget.h"
#include <QMessageBox>
#include <QDebug>
TableRecordsWidget::TableRecordsWidget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TableRecordsWidget)
{
    ui->setupUi(this);
    TableUpdate();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode (QHeaderView::Fixed);
    ui->tableWidget->verticalHeader()->setSectionResizeMode (QHeaderView::Fixed);
}

TableRecordsWidget::~TableRecordsWidget()
{
    delete ui;
}

void TableRecordsWidget::TableUpdate(){
    QFile file("../../records_file.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    QString temp, subtemp; int n;
    while (!in.atEnd())
    {
        temp = in.readLine();
        subtemp = temp.mid(0, temp.indexOf('.'));
        n = subtemp.toInt();
        temp = temp.mid(temp.indexOf('.') + 1);
        mp.insert(n, temp);
    }
    auto k = mp.begin();
    for(int i = 0; i < std::min(mp.size(), 10); i++){
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
        QTableWidgetItem* newItem = new QTableWidgetItem(QString::number(k.key()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, newItem);
        QTableWidgetItem* newItem1 = new QTableWidgetItem(k.value());
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, newItem1);
        k++;
    }
    file.close();
}

void TableRecordsWidget::on_ResetButton_clicked()
{
    QFile file("../../records_file.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "";
    file.close();
    ui->tableWidget->setRowCount(0);
}

