/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->setWindowModality(Qt::ApplicationModal);
        About->resize(477, 164);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        About->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label->setText(QString::fromUtf8("QStamina 1.1.0"));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(About);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_3->setText(QString::fromUtf8("Aleksey Kazantsev <alex@stamina.ru>"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_3);

        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_2->setText(QString::fromUtf8("Aleksey Lezhoev <lezhoev@gmail.com>"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), About, SLOT(reject()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About", nullptr));
        label_4->setText(QCoreApplication::translate("About", "Developing:", nullptr));
        label_5->setText(QCoreApplication::translate("About", "Lessons:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
