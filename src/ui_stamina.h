/********************************************************************************
** Form generated from reading UI file 'stamina.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAMINA_H
#define UI_STAMINA_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stamina
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *lblTimer;
    QFrame *frameTextField;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblLessonTitle;
    QLabel *lblLesson;
    QLabel *lblLayoutTitle;
    QLabel *lblLayout;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QMainWindow *Stamina)
    {
        if (Stamina->objectName().isEmpty())
            Stamina->setObjectName(QString::fromUtf8("Stamina"));
        Stamina->resize(682, 418);
        Stamina->setWindowTitle(QString::fromUtf8("QStamina"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon"), QSize(), QIcon::Normal, QIcon::Off);
        Stamina->setWindowIcon(icon);
        Stamina->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        centralWidget = new QWidget(Stamina);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lblTimer = new QLabel(centralWidget);
        lblTimer->setObjectName(QString::fromUtf8("lblTimer"));
        lblTimer->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lblTimer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lblTimer);


        verticalLayout->addLayout(horizontalLayout_3);

        frameTextField = new QFrame(centralWidget);
        frameTextField->setObjectName(QString::fromUtf8("frameTextField"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameTextField->sizePolicy().hasHeightForWidth());
        frameTextField->setSizePolicy(sizePolicy);
        frameTextField->setStyleSheet(QString::fromUtf8("border: 0px;"));
        frameTextField->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        frameTextField->setFrameShape(QFrame::StyledPanel);
        frameTextField->setFrameShadow(QFrame::Plain);
        frameTextField->setLineWidth(3);
        frameTextField->setMidLineWidth(0);

        verticalLayout->addWidget(frameTextField);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        lblLessonTitle = new QLabel(centralWidget);
        lblLessonTitle->setObjectName(QString::fromUtf8("lblLessonTitle"));
        lblLessonTitle->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_2->addWidget(lblLessonTitle);

        lblLesson = new QLabel(centralWidget);
        lblLesson->setObjectName(QString::fromUtf8("lblLesson"));
        lblLesson->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_2->addWidget(lblLesson);

        lblLayoutTitle = new QLabel(centralWidget);
        lblLayoutTitle->setObjectName(QString::fromUtf8("lblLayoutTitle"));
        lblLayoutTitle->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_2->addWidget(lblLayoutTitle);

        lblLayout = new QLabel(centralWidget);
        lblLayout->setObjectName(QString::fromUtf8("lblLayout"));
        lblLayout->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout_2->addWidget(lblLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        Stamina->setCentralWidget(centralWidget);

        retranslateUi(Stamina);

        QMetaObject::connectSlotsByName(Stamina);
    } // setupUi

    void retranslateUi(QMainWindow *Stamina)
    {
        pushButton->setText(QCoreApplication::translate("Stamina", "Start", nullptr));
        lblTimer->setText(QString());
        lblLessonTitle->setText(QCoreApplication::translate("Stamina", "Lesson: ", nullptr));
        lblLesson->setText(QCoreApplication::translate("Stamina", "not selected", nullptr));
        lblLayoutTitle->setText(QCoreApplication::translate("Stamina", "Layout:", nullptr));
        lblLayout->setText(QCoreApplication::translate("Stamina", "not selected", nullptr));
        (void)Stamina;
    } // retranslateUi

};

namespace Ui {
    class Stamina: public Ui_Stamina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAMINA_H
