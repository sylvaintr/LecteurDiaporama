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
    setWindowTitle("Changer de diaporama");
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

           _presentation->getModele()->changerDiaporama( query.value(0).toInt(),titre.toStdString(),query.value(2).toInt()*1000);
           _presentation->getVue()->majVue(_presentation->getModele()->getImageCourante());
           _presentation->getVue()->majVueDiaporama(_presentation->getModele()->getDiaporama());
            _presentation->getVue()->getTimer()->stop();
            _presentation->getModele()->setAutom(false);
       }



}

LecteurPresentation *changerdiaporama::getPresentation() const
{
    return _presentation;
}

void changerdiaporama::setPresentation(LecteurPresentation *newPresantation)
{
    _presentation = newPresantation;
}
void changerdiaporama::majinterface(){

        QStringList listdiaporama = getPresentation()->getModele()->getDb()->nomDiaporama();
        for (int i = 0; i < listdiaporama.size(); ++i) {
             ui->comboBox->addItem(listdiaporama.at(i));


    }
}
