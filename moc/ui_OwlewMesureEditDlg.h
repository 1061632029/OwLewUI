/********************************************************************************
** Form generated from reading UI file 'OwlewMesureEditDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWLEWMESUREEDITDLG_H
#define UI_OWLEWMESUREEDITDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_OwlewMesureEditDlgClass
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *lab_Dis;
    QLabel *lab_Angle;
    QLineEdit *led_Dis;
    QLineEdit *led_Angle;

    void setupUi(QDialog *OwlewMesureEditDlgClass)
    {
        if (OwlewMesureEditDlgClass->objectName().isEmpty())
            OwlewMesureEditDlgClass->setObjectName(QString::fromUtf8("OwlewMesureEditDlgClass"));
        OwlewMesureEditDlgClass->setWindowModality(Qt::NonModal);
        OwlewMesureEditDlgClass->setEnabled(true);
        OwlewMesureEditDlgClass->resize(200, 140);
        OwlewMesureEditDlgClass->setMinimumSize(QSize(200, 140));
        OwlewMesureEditDlgClass->setMaximumSize(QSize(200, 140));
        OwlewMesureEditDlgClass->setWindowOpacity(0.600000000000000);
        gridLayout_2 = new QGridLayout(OwlewMesureEditDlgClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lab_Dis = new QLabel(OwlewMesureEditDlgClass);
        lab_Dis->setObjectName(QString::fromUtf8("lab_Dis"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab_Dis->sizePolicy().hasHeightForWidth());
        lab_Dis->setSizePolicy(sizePolicy);
        lab_Dis->setMargin(6);

        gridLayout->addWidget(lab_Dis, 0, 0, 1, 1);

        lab_Angle = new QLabel(OwlewMesureEditDlgClass);
        lab_Angle->setObjectName(QString::fromUtf8("lab_Angle"));
        lab_Angle->setMargin(6);

        gridLayout->addWidget(lab_Angle, 1, 0, 1, 1);

        led_Dis = new QLineEdit(OwlewMesureEditDlgClass);
        led_Dis->setObjectName(QString::fromUtf8("led_Dis"));
        sizePolicy.setHeightForWidth(led_Dis->sizePolicy().hasHeightForWidth());
        led_Dis->setSizePolicy(sizePolicy);
        led_Dis->setMinimumSize(QSize(100, 25));
        led_Dis->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(led_Dis, 0, 1, 1, 1);

        led_Angle = new QLineEdit(OwlewMesureEditDlgClass);
        led_Angle->setObjectName(QString::fromUtf8("led_Angle"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(led_Angle->sizePolicy().hasHeightForWidth());
        led_Angle->setSizePolicy(sizePolicy1);
        led_Angle->setMinimumSize(QSize(100, 25));
        led_Angle->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(led_Angle, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(OwlewMesureEditDlgClass);

        QMetaObject::connectSlotsByName(OwlewMesureEditDlgClass);
    } // setupUi

    void retranslateUi(QDialog *OwlewMesureEditDlgClass)
    {
        OwlewMesureEditDlgClass->setWindowTitle(QApplication::translate("OwlewMesureEditDlgClass", "OwlewMesureEditDlg", nullptr));
        lab_Dis->setText(QApplication::translate("OwlewMesureEditDlgClass", "\351\225\277\345\272\246", nullptr));
        lab_Angle->setText(QApplication::translate("OwlewMesureEditDlgClass", "\350\247\222\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OwlewMesureEditDlgClass: public Ui_OwlewMesureEditDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWLEWMESUREEDITDLG_H
