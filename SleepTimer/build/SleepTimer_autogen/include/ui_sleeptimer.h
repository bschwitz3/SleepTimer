/********************************************************************************
** Form generated from reading UI file 'sleeptimer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLEEPTIMER_H
#define UI_SLEEPTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SleepTimer
{
public:
    QLabel *label_image;
    QLabel *label;
    QPushButton *pushButton;
    QSlider *sliderBar;
    QLabel *timeLabel;
    QLabel *title;
    QLabel *byMe;

    void setupUi(QWidget *SleepTimer)
    {
        if (SleepTimer->objectName().isEmpty())
            SleepTimer->setObjectName("SleepTimer");
        SleepTimer->resize(597, 262);
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        SleepTimer->setFont(font);
        SleepTimer->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 178, 255);"));
        label_image = new QLabel(SleepTimer);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(400, 0, 150, 150));
        label = new QLabel(SleepTimer);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 130, 421, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Futura")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);
        pushButton = new QPushButton(SleepTimer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 180, 111, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Futura")});
        font2.setPointSize(26);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8(" border: 1px solid #FFFFFF;\n"
"border-radius: 30px;"));
        sliderBar = new QSlider(SleepTimer);
        sliderBar->setObjectName("sliderBar");
        sliderBar->setGeometry(QRect(50, 200, 241, 25));
        sliderBar->setStyleSheet(QString::fromUtf8("color: #E9BB5F;"));
        sliderBar->setOrientation(Qt::Horizontal);
        timeLabel = new QLabel(SleepTimer);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setGeometry(QRect(320, 190, 91, 41));
        timeLabel->setFont(font1);
        title = new QLabel(SleepTimer);
        title->setObjectName("title");
        title->setGeometry(QRect(120, 30, 291, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Impact")});
        font3.setPointSize(67);
        font3.setBold(true);
        font3.setItalic(false);
        title->setFont(font3);
        title->setStyleSheet(QString::fromUtf8("color: #E9BB5F;"));
        byMe = new QLabel(SleepTimer);
        byMe->setObjectName("byMe");
        byMe->setGeometry(QRect(140, 90, 121, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Futura")});
        byMe->setFont(font4);

        retranslateUi(SleepTimer);

        QMetaObject::connectSlotsByName(SleepTimer);
    } // setupUi

    void retranslateUi(QWidget *SleepTimer)
    {
        SleepTimer->setWindowTitle(QCoreApplication::translate("SleepTimer", "SleepTimer", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("SleepTimer", "How long before your computer shuts down ?", nullptr));
        pushButton->setText(QCoreApplication::translate("SleepTimer", "Start", nullptr));
        timeLabel->setText(QCoreApplication::translate("SleepTimer", "0 min", nullptr));
        title->setText(QCoreApplication::translate("SleepTimer", "SleepTimer", nullptr));
        byMe->setText(QCoreApplication::translate("SleepTimer", "by Bastien Schwitz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SleepTimer: public Ui_SleepTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLEEPTIMER_H
