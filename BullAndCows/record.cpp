#include "record.h"
#include "ui_record.h"

RecordWidgt::RecordWidgt(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RecordWidgt)
{
    ui->setupUi(this);
}

RecordWidgt::~RecordWidgt()
{
    delete ui;
}
