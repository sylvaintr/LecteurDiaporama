/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionQuitter;
    QAction *actionChanger_diaporama;
    QAction *actionBoucler;
    QAction *actionA_propos;
    QAction *actionPar_d_faut;
    QAction *actionVider_lecteur;
    QAction *actionVitesse;
    QAction *actionmodifier_le_nom_des_image;
    QAction *actionmodifier_le_chemain_des_image;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titreDiapo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *reculer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *image;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *avancer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *titreImage;
    QLabel *categorieImage;
    QLabel *numeroImage;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ralentir;
    QPushButton *automatique;
    QPushButton *accelerer;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QMenu *menufichier;
    QMenu *menuParam_tre;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(717, 438);
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionChanger_diaporama = new QAction(LecteurVue);
        actionChanger_diaporama->setObjectName(QString::fromUtf8("actionChanger_diaporama"));
        actionBoucler = new QAction(LecteurVue);
        actionBoucler->setObjectName(QString::fromUtf8("actionBoucler"));
        actionA_propos = new QAction(LecteurVue);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        actionPar_d_faut = new QAction(LecteurVue);
        actionPar_d_faut->setObjectName(QString::fromUtf8("actionPar_d_faut"));
        actionVider_lecteur = new QAction(LecteurVue);
        actionVider_lecteur->setObjectName(QString::fromUtf8("actionVider_lecteur"));
        actionVitesse = new QAction(LecteurVue);
        actionVitesse->setObjectName(QString::fromUtf8("actionVitesse"));
        actionmodifier_le_nom_des_image = new QAction(LecteurVue);
        actionmodifier_le_nom_des_image->setObjectName(QString::fromUtf8("actionmodifier_le_nom_des_image"));
        actionmodifier_le_chemain_des_image = new QAction(LecteurVue);
        actionmodifier_le_chemain_des_image->setObjectName(QString::fromUtf8("actionmodifier_le_chemain_des_image"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titreDiapo = new QLabel(centralwidget);
        titreDiapo->setObjectName(QString::fromUtf8("titreDiapo"));

        horizontalLayout->addWidget(titreDiapo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        reculer = new QPushButton(centralwidget);
        reculer->setObjectName(QString::fromUtf8("reculer"));

        horizontalLayout_2->addWidget(reculer);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);

        image = new QLabel(centralwidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setPixmap(QPixmap(QString::fromUtf8(":/cartesDisney/Disney_tapis.gif")));

        horizontalLayout_2->addWidget(image);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        avancer = new QPushButton(centralwidget);
        avancer->setObjectName(QString::fromUtf8("avancer"));
        avancer->setEnabled(true);
        avancer->setMaximumSize(QSize(75, 24));
        avancer->setCheckable(false);
        avancer->setChecked(false);
        avancer->setAutoRepeat(false);
        avancer->setAutoExclusive(false);
        avancer->setAutoDefault(false);
        avancer->setFlat(false);

        horizontalLayout_2->addWidget(avancer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        titreImage = new QLabel(centralwidget);
        titreImage->setObjectName(QString::fromUtf8("titreImage"));

        horizontalLayout_5->addWidget(titreImage);

        categorieImage = new QLabel(centralwidget);
        categorieImage->setObjectName(QString::fromUtf8("categorieImage"));

        horizontalLayout_5->addWidget(categorieImage);

        numeroImage = new QLabel(centralwidget);
        numeroImage->setObjectName(QString::fromUtf8("numeroImage"));

        horizontalLayout_5->addWidget(numeroImage);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        ralentir = new QPushButton(centralwidget);
        ralentir->setObjectName(QString::fromUtf8("ralentir"));

        horizontalLayout_3->addWidget(ralentir);

        automatique = new QPushButton(centralwidget);
        automatique->setObjectName(QString::fromUtf8("automatique"));

        horizontalLayout_3->addWidget(automatique);

        accelerer = new QPushButton(centralwidget);
        accelerer->setObjectName(QString::fromUtf8("accelerer"));

        horizontalLayout_3->addWidget(accelerer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 717, 22));
        menufichier = new QMenu(menubar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        menuParam_tre = new QMenu(menubar);
        menuParam_tre->setObjectName(QString::fromUtf8("menuParam_tre"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menufichier->menuAction());
        menubar->addAction(menuParam_tre->menuAction());
        menubar->addAction(menuAide->menuAction());
        menufichier->addAction(actionQuitter);
        menufichier->addAction(actionChanger_diaporama);
        menufichier->addAction(actionVider_lecteur);
        menuParam_tre->addAction(actionBoucler);
        menuParam_tre->addAction(actionPar_d_faut);
        menuParam_tre->addAction(actionVitesse);
        menuParam_tre->addAction(actionmodifier_le_nom_des_image);
        menuParam_tre->addAction(actionmodifier_le_chemain_des_image);
        menuAide->addAction(actionA_propos);

        retranslateUi(LecteurVue);

        avancer->setDefault(false);


        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "MainWindow", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
#if QT_CONFIG(shortcut)
        actionQuitter->setShortcut(QCoreApplication::translate("LecteurVue", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChanger_diaporama->setText(QCoreApplication::translate("LecteurVue", "Changer diaporama", nullptr));
        actionBoucler->setText(QCoreApplication::translate("LecteurVue", "Boucler", nullptr));
        actionA_propos->setText(QCoreApplication::translate("LecteurVue", "A propos", nullptr));
#if QT_CONFIG(shortcut)
        actionA_propos->setShortcut(QCoreApplication::translate("LecteurVue", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPar_d_faut->setText(QCoreApplication::translate("LecteurVue", "Par d\303\251faut", nullptr));
        actionVider_lecteur->setText(QCoreApplication::translate("LecteurVue", "Vider lecteur", nullptr));
        actionVitesse->setText(QCoreApplication::translate("LecteurVue", "Vitesse", nullptr));
        actionmodifier_le_nom_des_image->setText(QCoreApplication::translate("LecteurVue", "modifier le nom des image", nullptr));
        actionmodifier_le_chemain_des_image->setText(QCoreApplication::translate("LecteurVue", "modifier le chemain des image", nullptr));
        titreDiapo->setText(QCoreApplication::translate("LecteurVue", "titreDiapo", nullptr));
        reculer->setText(QCoreApplication::translate("LecteurVue", "<", nullptr));
        image->setText(QString());
        avancer->setText(QCoreApplication::translate("LecteurVue", ">", nullptr));
        titreImage->setText(QCoreApplication::translate("LecteurVue", "titreImage", nullptr));
        categorieImage->setText(QCoreApplication::translate("LecteurVue", "categorieImage", nullptr));
        numeroImage->setText(QCoreApplication::translate("LecteurVue", "numeroImage", nullptr));
        ralentir->setText(QCoreApplication::translate("LecteurVue", "<<", nullptr));
        automatique->setText(QCoreApplication::translate("LecteurVue", "> II", nullptr));
        accelerer->setText(QCoreApplication::translate("LecteurVue", ">>", nullptr));
        menufichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tre->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tre", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
