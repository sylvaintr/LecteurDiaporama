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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AProposDe
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *AProposDe)
    {
        if (AProposDe->objectName().isEmpty())
            AProposDe->setObjectName(QString::fromUtf8("AProposDe"));
        AProposDe->resize(400, 300);
        verticalLayout = new QVBoxLayout(AProposDe);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(AProposDe);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(AProposDe);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(AProposDe);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(AProposDe);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(AProposDe);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(AProposDe);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(AProposDe);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(AProposDe);

        QMetaObject::connectSlotsByName(AProposDe);
    } // setupUi

    void retranslateUi(QWidget *AProposDe)
    {
        AProposDe->setWindowTitle(QCoreApplication::translate("AProposDe", "Form", nullptr));
        label->setText(QCoreApplication::translate("AProposDe", "a propo de ", nullptr));
        label_3->setText(QCoreApplication::translate("AProposDe", "v3", nullptr));
        label_2->setText(QCoreApplication::translate("AProposDe", "vresion ", nullptr));
        label_4->setText(QCoreApplication::translate("AProposDe", "date ", nullptr));
        label_5->setText(QCoreApplication::translate("AProposDe", "auteur", nullptr));
        label_6->setText(QCoreApplication::translate("AProposDe", "14/05/2024", nullptr));
        label_7->setText(QCoreApplication::translate("AProposDe", "sylvain andoni tatiana", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AProposDe: public Ui_AProposDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APROPOSDE_H
