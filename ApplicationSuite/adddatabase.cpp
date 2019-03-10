#include "adddatabase.h"
#include "ui_adddatabase.h"
#include <QFileDialog>
#include <QDir>
#include <QProcess>
#include <QTextStream>
AddDatabase::AddDatabase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddDatabase)
{
    ui->setupUi(this);
}

AddDatabase::~AddDatabase()
{
    delete ui;
}

void AddDatabase::on_backToAddDatabase_clicked()
{
    emit backToAddDatabaseclicked();
}

void AddDatabase::on_pushButton1_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open a file",QDir::homePath());
    //QTextStream out(stdout);
    //
    QStringList arguments {"/home/aksh/QT/ApplicationSuite/Resouces/file_converter.py",fileName};
    QProcess p;
    p.start("python3",arguments);
    p.waitForFinished();
    ui->stackedWidget->setCurrentIndex(1);
}
