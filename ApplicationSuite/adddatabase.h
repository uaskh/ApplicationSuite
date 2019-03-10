#ifndef ADDDATABASE_H
#define ADDDATABASE_H

#include <QWidget>

namespace Ui {
class AddDatabase;
}

class AddDatabase : public QWidget
{
    Q_OBJECT

public:
    explicit AddDatabase(QWidget *parent = nullptr);
    ~AddDatabase();

private slots:
    void on_backToAddDatabase_clicked();

    void on_pushButton1_clicked();

private:
    Ui::AddDatabase *ui;

signals:
    void backToAddDatabaseclicked();
};

#endif // ADDDATABASE_H
