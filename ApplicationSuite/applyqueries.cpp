#include "applyqueries.h"
#include "ui_applyqueries.h"

ApplyQueries::ApplyQueries(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyQueries)
{
    ui->setupUi(this);
}

ApplyQueries::~ApplyQueries()
{
    delete ui;
}
