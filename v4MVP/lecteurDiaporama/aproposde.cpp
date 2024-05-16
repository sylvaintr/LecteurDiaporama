#include "aproposde.h"
#include "ui_aproposde.h"

AProposDe::AProposDe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AProposDe)
{
    ui->setupUi(this);
}

AProposDe::~AProposDe()
{
    delete ui;
}
