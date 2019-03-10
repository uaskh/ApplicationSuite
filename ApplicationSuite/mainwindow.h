#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <adddatabase.h>
#include <applyqueries.h>
#include <modifydatabase.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_addDatabase_clicked();

    void on_applyQueries_clicked();

    void on_modifyDatabase_clicked();

    void backToMainWindow();

private:
    Ui::MainWindow *ui;
    AddDatabase ad;
    ApplyQueries aq;
    ModifyDatabase md;
};

#endif // MAINWINDOW_H
