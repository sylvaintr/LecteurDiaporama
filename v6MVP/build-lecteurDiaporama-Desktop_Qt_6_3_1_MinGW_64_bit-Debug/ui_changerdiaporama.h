/********************************************************************************
** Form generated from reading UI file 'changerdiaporama.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGERDIAPORAMA_H
#define UI_CHANGERDIAPORAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_changerdiaporama
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *changerdiaporama)
    {
        if (changerdiaporama->objectName().isEmpty())
            changerdiaporama->setObjectName(QString::fromUtf8("changerdiaporama"));
        changerdiaporama->resize(400, 300);
        verticalLayout = new QVBoxLayout(changerdiaporama);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(changerdiaporama);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        comboBox = new QComboBox(changerdiaporama);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(changerdiaporama);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(changerdiaporama);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, changerdiaporama, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, changerdiaporama, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(changerdiaporama);
    } // setupUi

    void retranslateUi(QDialog *changerdiaporama)
    {
        changerdiaporama->setWindowTitle(QCoreApplication::translate("changerdiaporama", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changerdiaporama", "quelle diaporama voulez-vous ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changerdiaporama: public Ui_changerdiaporama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGERDIAPORAMA_H
