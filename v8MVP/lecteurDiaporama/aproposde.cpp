#include "aproposde.h"
#include "ui_aproposde.h"

AProposDe::AProposDe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AProposDe)
{
    ui->setupUi(this);
    setWindowTitle("A propos de...");
    setWindowIcon(QIcon(":/cartesDisney/apropode.png"));
}

AProposDe::~AProposDe()
{
    delete ui;
}
