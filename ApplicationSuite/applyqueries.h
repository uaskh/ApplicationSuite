#ifndef APPLYQUERIES_H
#define APPLYQUERIES_H

#include <QWidget>

namespace Ui {
class ApplyQueries;
}

class ApplyQueries : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyQueries(QWidget *parent = nullptr);
    ~ApplyQueries();

private:
    Ui::ApplyQueries *ui;
};

#endif // APPLYQUERIES_H
