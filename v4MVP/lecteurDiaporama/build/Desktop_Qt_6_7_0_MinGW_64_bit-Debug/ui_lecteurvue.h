/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(717, 438);
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName("actionQuitter");
        actionChanger_diaporama = new QAction(LecteurVue);
        actionChanger_diaporama->setObjectName("actionChanger_diaporama");
        actionBoucler = new QAction(LecteurVue);
        actionBoucler->setObjectName("actionBoucler");
        actionA_propos = new QAction(LecteurVue);
        actionA_propos->setObjectName("actionA_propos");
        actionPar_d_faut = new QAction(LecteurVue);
        actionPar_d_faut->setObjectName("actionPar_d_faut");
        actionVider_lecteur = new QAction(LecteurVue);
        actionVider_lecteur->setObjectName("actionVider_lecteur");
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        titreDiapo = new QLabel(centralwidget);
        titreDiapo->setObjectName("titreDiapo");

        horizontalLayout->addWidget(titreDiapo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        reculer = new QPushButton(centralwidget);
        reculer->setObjectName("reculer");

        horizontalLayout_2->addWidget(reculer);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);

        image = new QLabel(centralwidget);
        image->setObjectName("image");
        image->setPixmap(QPixmap(QString::fromUtf8(":/cartesDisney/Disney_tapis.gif")));

        horizontalLayout_2->addWidget(image);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        avancer = new QPushButton(centralwidget);
        avancer->setObjectName("avancer");
        avancer->setMaximumSize(QSize(75, 24));

        horizontalLayout_2->addWidget(avancer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        titreImage = new QLabel(centralwidget);
        titreImage->setObjectName("titreImage");

        horizontalLayout_5->addWidget(titreImage);

        categorieImage = new QLabel(centralwidget);
        categorieImage->setObjectName("categorieImage");

        horizontalLayout_5->addWidget(categorieImage);

        numeroImage = new QLabel(centralwidget);
        numeroImage->setObjectName("numeroImage");

        horizontalLayout_5->addWidget(numeroImage);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        ralentir = new QPushButton(centralwidget);
        ralentir->setObjectName("ralentir");

        horizontalLayout_3->addWidget(ralentir);

        automatique = new QPushButton(centralwidget);
        automatique->setObjectName("automatique");

        horizontalLayout_3->addWidget(automatique);

        accelerer = new QPushButton(centralwidget);
        accelerer->setObjectName("accelerer");

        horizontalLayout_3->addWidget(accelerer);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 717, 22));
        menufichier = new QMenu(menubar);
        menufichier->setObjectName("menufichier");
        menuParam_tre = new QMenu(menubar);
        menuParam_tre->setObjectName("menuParam_tre");
        menuAide = new QMenu(menubar);
        menuAide->setObjectName("menuAide");
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName("statusbar");
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menufichier->menuAction());
        menubar->addAction(menuParam_tre->menuAction());
        menubar->addAction(menuAide->menuAction());
        menufichier->addAction(actionQuitter);
        menufichier->addAction(actionChanger_diaporama);
        menufichier->addAction(actionVider_lecteur);
        menuParam_tre->addAction(actionBoucler);
        menuParam_tre->addAction(actionPar_d_faut);
        menuAide->addAction(actionA_propos);

        retranslateUi(LecteurVue);

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
