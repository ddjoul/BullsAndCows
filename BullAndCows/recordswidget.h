#ifndef RECORDSWIDGET_H
#define RECORDSWIDGET_H

#include <QDialog>

namespace Ui {
class RecordsWidget;
}

class RecordsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit RecordsWidget(QWidget *parent = nullptr);
    ~RecordsWidget();

private slots:
    void on_CancelButton_clicked();
    void on_OkButton_clicked();

    void on_NameLine_returnPressed();

public slots:
    void slot(QString a);

private:
    Ui::RecordsWidget *ui;
    QString RecordsArray[2];
};

#endif // RECORDSWIDGET_H
