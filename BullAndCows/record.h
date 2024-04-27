#ifndef RECORD_H
#define RECORD_H

#include <QWidget>

namespace Ui {
class RecordWidgt;
}

class RecordWidgt : public QWidget
{
    Q_OBJECT

public:
    explicit RecordWidgt(QWidget *parent = nullptr);
    ~RecordWidgt();

private:
    Ui::RecordWidgt *ui;
};

#endif // RECORD_H
