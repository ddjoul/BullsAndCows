#ifndef TABLERECORDSWIDGET_H
#define TABLERECORDSWIDGET_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMap>
namespace Ui {
class TableRecordsWidget;
}

class TableRecordsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit TableRecordsWidget(QWidget *parent = nullptr);
    ~TableRecordsWidget();

private slots:
    void on_ResetButton_clicked();

private:
    Ui::TableRecordsWidget *ui;
    void TableUpdate();
    QMultiMap<int, QString> mp;
};

#endif // TABLERECORDSWIDGET_H
