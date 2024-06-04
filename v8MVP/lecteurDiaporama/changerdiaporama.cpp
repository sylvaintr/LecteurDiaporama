#include "changerdiaporama.h"
#include "ui_changerdiaporama.h"
#include "lecteurpresentation.h"
#include "lecteur.h"
#include "lecteurvue.h"

changerdiaporama::changerdiaporama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changerdiaporama)
{

    ui->setupUi(this);
    setWindowTitle("changer de diaporama");
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this , SLOT(valider()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), this , SLOT(annuler()));
    setWindowIcon(QIcon(":/cartesDisney/changer.png"));
}

changerdiaporama::~changerdiaporama()
{
    delete ui;
}

void changerdiaporama::annuler()
{

}

void changerdiaporama::valider()
{

    QSqlQuery query;
        query.prepare("SELECT * FROM Diaporamas WHERE idDiaporama = ? ORDER BY idDiaporama");
        query.addBindValue(ui->comboBox->currentIndex()+1);
        query.exec();
       if( query.next()){
           QString titre =query.value(1).toString();

           _presantation->getModele()->changerDiaporama( query.value(0).toInt(),titre.toStdString(),query.value(2).toInt()*1000);
           _presantation->getVue()->majvue(_presantation->getModele()->getImageCourante());
           _presantation->getVue()->majVueDiaporama(_presantation->getModele()->getDiaporama());
            _presantation->getVue()->getTimer()->stop();
            _presantation->getModele()->setAutom(false);
       }



}

LecteurPresentation *changerdiaporama::getpresantation() const
{
    return _presantation;
}

void changerdiaporama::setPresantation(LecteurPresentation *newPresantation)
{
    _presantation = newPresantation;
}
void changerdiaporama::majinterface(){

        QStringList listdiaporama = getpresantation()->getModele()->getDb()->nomDiaporama();
        for (int i = 0; i < listdiaporama.size(); ++i) {
             ui->comboBox->addItem(listdiaporama.at(i));


    }
}
