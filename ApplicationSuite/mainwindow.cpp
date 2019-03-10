#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/aksh/QT/ApplicationSuite/Resouces/DisplayPic.jpg");
    ui->DisplayPic->setPixmap(pix);
    ui->DisplayPic->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->stackedWidget->insertWidget(1,&ad);
    ui->stackedWidget->insertWidget(2,&aq);
    ui->stackedWidget->insertWidget(3,&md);
    connect(&ad,SIGNAL(backToAddDatabaseclicked()),this,SLOT(backToMainWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addDatabase_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_applyQueries_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_modifyDatabase_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::backToMainWindow()
{
    ui->stackedWidget->setCurrentIndex(0);
}
