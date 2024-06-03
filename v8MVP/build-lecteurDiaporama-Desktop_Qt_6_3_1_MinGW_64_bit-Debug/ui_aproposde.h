/********************************************************************************
** Form generated from reading UI file 'aproposde.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APROPOSDE_H
#define UI_APROPOSDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AProposDe
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AProposDe)
    {
        if (AProposDe->objectName().isEmpty())
            AProposDe->setObjectName(QString::fromUtf8("AProposDe"));
        AProposDe->resize(381, 315);
        centralwidget = new QWidget(AProposDe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        AProposDe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AProposDe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 381, 22));
        AProposDe->setMenuBar(menubar);
        statusbar = new QStatusBar(AProposDe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AProposDe->setStatusBar(statusbar);

        retranslateUi(AProposDe);

        QMetaObject::connectSlotsByName(AProposDe);
    } // setupUi

    void retranslateUi(QMainWindow *AProposDe)
    {
        AProposDe->setWindowTitle(QCoreApplication::translate("AProposDe", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AProposDe", "A propos de...", nullptr));
        label_2->setText(QCoreApplication::translate("AProposDe", "Versions", nullptr));
        label_3->setText(QCoreApplication::translate("AProposDe", "Date", nullptr));
        label_4->setText(QCoreApplication::translate("AProposDe", "Auteurs", nullptr));
        label_5->setText(QCoreApplication::translate("AProposDe", "Andoni BERHO, Tatiana NOVION, Sylvain TROUILH", nullptr));
        label_6->setText(QCoreApplication::translate("AProposDe", "31/05/2024", nullptr));
        label_7->setText(QCoreApplication::translate("AProposDe", "V8 MVP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AProposDe: public Ui_AProposDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APROPOSDE_H
