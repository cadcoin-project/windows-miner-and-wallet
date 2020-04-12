#ifndef MININGPAGE_H
#define MININGPAGE_H

#include "clientmodel.h"

#include <QWidget>


namespace Ui {
    class MiningPage;
}
class ClientModel;

class MiningPage : public QWidget
{
    Q_OBJECT

public:
    explicit MiningPage(QWidget *parent = 0);
    ~MiningPage();

    



public slots:
    

private slots:

private:
    Ui::MiningPage *ui;
    ClientModel *model;

    
};

#endif // MININGPAGE_H
