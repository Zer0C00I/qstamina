/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Results
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblErrors;
    QLabel *label_2;
    QLabel *lblAmount;
    QLabel *label_3;
    QLabel *lblTime;
    QLabel *label_4;
    QLabel *lblSpeed;
    QLabel *label;
    QGraphicsView *graph;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Results)
    {
        if (Results->objectName().isEmpty())
            Results->setObjectName(QString::fromUtf8("Results"));
        Results->setWindowModality(Qt::ApplicationModal);
        Results->resize(400, 344);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon"), QSize(), QIcon::Normal, QIcon::Off);
        Results->setWindowIcon(icon);
        Results->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Results->setModal(true);
        verticalLayout_2 = new QVBoxLayout(Results);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblErrors = new QLabel(Results);
        lblErrors->setObjectName(QString::fromUtf8("lblErrors"));
        lblErrors->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lblErrors->setText(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblErrors);

        label_2 = new QLabel(Results);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lblAmount = new QLabel(Results);
        lblAmount->setObjectName(QString::fromUtf8("lblAmount"));
        lblAmount->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lblAmount->setText(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblAmount);

        label_3 = new QLabel(Results);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lblTime = new QLabel(Results);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lblTime->setText(QString::fromUtf8(""));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblTime);

        label_4 = new QLabel(Results);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lblSpeed = new QLabel(Results);
        lblSpeed->setObjectName(QString::fromUtf8("lblSpeed"));
        lblSpeed->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lblSpeed->setText(QString::fromUtf8(""));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblSpeed);

        label = new QLabel(Results);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout);

        graph = new QGraphicsView(Results);
        graph->setObjectName(QString::fromUtf8("graph"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graph->sizePolicy().hasHeightForWidth());
        graph->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(graph);

        buttonBox = new QDialogButtonBox(Results);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Results);
        QObject::connect(buttonBox, SIGNAL(accepted()), Results, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Results, SLOT(reject()));

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QDialog *Results)
    {
        Results->setWindowTitle(QCoreApplication::translate("Results", "Result", nullptr));
        label_2->setText(QCoreApplication::translate("Results", "Symbols:", nullptr));
        label_3->setText(QCoreApplication::translate("Results", "Time:", nullptr));
        label_4->setText(QCoreApplication::translate("Results", "Average speed:", nullptr));
        label->setText(QCoreApplication::translate("Results", "Misstypes:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
