#include "modifydatabase.h"
#include "ui_modifydatabase.h"

ModifyDatabase::ModifyDatabase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyDatabase)
{
    ui->setupUi(this);
}

ModifyDatabase::~ModifyDatabase()
{
    delete ui;
}
