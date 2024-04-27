#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTableWidgetItem>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ProofButton_clicked();
    void on_NewGameButton_clicked();
    void on_TableRecordsButton_clicked();
    void on_lineEdit_returnPressed();

signals:
    void signal(QString);

private:
    QWidget* widg;
    void EndGame();
    QTableWidgetItem* Resultat(QString text);
    QString number;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
