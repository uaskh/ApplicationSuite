#ifndef MODIFYDATABASE_H
#define MODIFYDATABASE_H

#include <QWidget>

namespace Ui {
class ModifyDatabase;
}

class ModifyDatabase : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyDatabase(QWidget *parent = nullptr);
    ~ModifyDatabase();

private:
    Ui::ModifyDatabase *ui;
};

#endif // MODIFYDATABASE_H
