#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recordswidget.h"
#include "tablerecordswidget.h"
#include <ctime>
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
    ui->lineEdit->setInputMask("9999");
    ui->ProofButton->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode (QHeaderView::Fixed);
    ui->tableWidget->verticalHeader()->setSectionResizeMode (QHeaderView::Fixed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ProofButton_clicked()
{
    if(ui->lineEdit->text().size() < 4){
        QMessageBox::critical(this, "Ошибка", "Неверно введены данные!");
    }
    else {
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
        QTableWidgetItem* newItem = new QTableWidgetItem(ui->lineEdit->text());
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, newItem);
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, Resultat(ui->lineEdit->text()));
    }
    if(ui->lineEdit->text() == number) {
        EndGame();
    }
    ui->lineEdit->clear();
}

void MainWindow::EndGame(){
    ui->label->setText("Поздравляем!");
    ui->ProofButton->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    RecordsWidget* w = new RecordsWidget;
    w->setModal(true);
    connect(this, &MainWindow::signal, w, &RecordsWidget::slot);
    emit signal(QString::number(ui->tableWidget->rowCount()));
    w->exec();
}


void MainWindow::on_NewGameButton_clicked()
{
    ui->label->setText("Давайте сыграем в игру!");
    ui->tableWidget->setEnabled(true);
    ui->tableWidget->setRowCount(0);
    this->number = "";
    int temp = rand() % 9 + 1;
    while(number.size() < 4){
        if(number.indexOf(QString::number(temp)) == -1){
            number = number + QString::number(temp);
        }
        temp = rand() % 10;
    }
    ui->ProofButton->setEnabled(true);
    ui->lineEdit->setEnabled(true);
    qDebug() << number;
}

QTableWidgetItem* MainWindow::Resultat(QString text){
    int bull = 0, cows = 0;
    QString copy_number = number;
    for(int i = 0; i < number.size(); i++){
        if(copy_number[i] == text[i]) bull++;
    }
    for(int i = 0; i < number.size(); i++){
        if(copy_number.indexOf(text[i]) > -1) {
            copy_number[copy_number.indexOf(text[i])] = '.';
            cows++;
        }
    }
    cows -= bull;
    QString temp("Коров " + QString::number(cows) + "; Быков: " + QString::number(bull) + ".");
    QTableWidgetItem* text_res = new QTableWidgetItem(temp);
    return text_res;
}


void MainWindow::on_TableRecordsButton_clicked()
{
    QFile file("../../records_file.txt");
    if (!file.open(QIODevice:: ReadOnly | QIODevice::Text)){
        QMessageBox::critical(this, "Error", "Не существует файла для ввода текста");
        file.close();
    }
    else{
    file.close();
    TableRecordsWidget* w = new TableRecordsWidget;
    w->setModal(true);
    w->exec();
    }
}


void MainWindow::on_lineEdit_returnPressed()
{
    ui->ProofButton->click();
}

