/********************************************************************************
** Form generated from reading UI file 'mailtomatum.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILTOMATUM_H
#define UI_MAILTOMATUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mailtomatum
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *Mailtomatum)
    {
        if (Mailtomatum->objectName().isEmpty())
            Mailtomatum->setObjectName(QString::fromUtf8("Mailtomatum"));
        Mailtomatum->resize(872, 582);
        Mailtomatum->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: rgb(0, 51, 102);\n"
"background-color:rgb(143, 139, 139);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"font: 15pt;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	border: 3px solid rgb(0, 99, 177);\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"font: 18pt \"Times New Roman\";\n"
"}\n"
"\n"
"\n"
"QGroupBox{\n"
"	border: 0px;\n"
"}\n"
""));
        centralwidget = new QWidget(Mailtomatum);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(451, 491));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(250, 250));
        label->setMaximumSize(QSize(250, 250));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        Mailtomatum->setCentralWidget(centralwidget);

        retranslateUi(Mailtomatum);

        QMetaObject::connectSlotsByName(Mailtomatum);
    } // setupUi

    void retranslateUi(QMainWindow *Mailtomatum)
    {
        Mailtomatum->setWindowTitle(QCoreApplication::translate("Mailtomatum", "Mailtomatum", nullptr));
#if QT_CONFIG(whatsthis)
        Mailtomatum->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        groupBox->setTitle(QString());
        label->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Mailtomatum", "Correo electr\303\263nico", nullptr));
        pushButton->setText(QCoreApplication::translate("Mailtomatum", "Validar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Mailtomatum", "Limpiar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mailtomatum: public Ui_Mailtomatum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILTOMATUM_H
