/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *fontSize;
    QSpacerItem *horizontalSpacer;
    QCheckBox *separateKeyboard;
    QCheckBox *enableSound;
    QHBoxLayout *horizontalLayout_2;
    QLabel *volumeSliderLabel;
    QSlider *volumeSlider;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QString::fromUtf8("SettingsForm"));
        SettingsForm->resize(400, 168);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SettingsForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SettingsForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        fontSize = new QSpinBox(SettingsForm);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontSize->sizePolicy().hasHeightForWidth());
        fontSize->setSizePolicy(sizePolicy);
        fontSize->setMinimumSize(QSize(75, 0));
        fontSize->setSuffix(QString::fromUtf8(" px"));
        fontSize->setMinimum(12);

        horizontalLayout->addWidget(fontSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        separateKeyboard = new QCheckBox(SettingsForm);
        separateKeyboard->setObjectName(QString::fromUtf8("separateKeyboard"));

        verticalLayout->addWidget(separateKeyboard);

        enableSound = new QCheckBox(SettingsForm);
        enableSound->setObjectName(QString::fromUtf8("enableSound"));

        verticalLayout->addWidget(enableSound);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        volumeSliderLabel = new QLabel(SettingsForm);
        volumeSliderLabel->setObjectName(QString::fromUtf8("volumeSliderLabel"));
        volumeSliderLabel->setEnabled(false);

        horizontalLayout_2->addWidget(volumeSliderLabel);

        volumeSlider = new QSlider(SettingsForm);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setEnabled(false);
        volumeSlider->setMinimum(1);
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setTracking(true);
        volumeSlider->setOrientation(Qt::Horizontal);
        volumeSlider->setTickPosition(QSlider::NoTicks);
        volumeSlider->setTickInterval(1);

        horizontalLayout_2->addWidget(volumeSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(SettingsForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QDialog *SettingsForm)
    {
        SettingsForm->setWindowTitle(QCoreApplication::translate("SettingsForm", "Settings", nullptr));
        label->setText(QCoreApplication::translate("SettingsForm", "Font size", nullptr));
        separateKeyboard->setText(QCoreApplication::translate("SettingsForm", "Show keyboard in separate window", nullptr));
        enableSound->setText(QCoreApplication::translate("SettingsForm", "Enable sound effects", nullptr));
        volumeSliderLabel->setText(QCoreApplication::translate("SettingsForm", "Sound volume:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
