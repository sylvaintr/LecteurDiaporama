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
    (*this).db->openDataBase();

    QSqlQuery query;
    query.exec("SELECT * FROM Diaporamas ORDER BY idDiaporama");



         for(int i=0; query.next(); i++ ){
             ui->comboBox->addItem(query.value(1).toString());

             qDebug() << query.value(0).toInt() << query.value(1).toString() << query.value(2).toInt()*1000;

         }
    /*
    ui->comboBox->addItem("diaporama de Pantxika");
    ui->comboBox->addItem("diaporama de Thierry");
    ui->comboBox->addItem("diaporama de Yann");
    ui->comboBox->addItem("diaporama de Manu");*/

    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this , SLOT(valider()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), this , SLOT(annuler()));

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
           _presantation->getVue()->majvuediaporama(_presantation->getModele()->getDiaporama());
            _presantation->getVue()->getTimer()->stop();
            _presantation->getModele()->setAutom(false);
       }



}

LecteurPresentation *changerdiaporama::presantation() const
{
    return _presantation;
}

void changerdiaporama::setPresantation(LecteurPresentation *newPresantation)
{
    _presantation = newPresantation;
}

