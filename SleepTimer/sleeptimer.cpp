#include "sleeptimer.h"
#include "./ui_sleeptimer.h"

SleepTimer::SleepTimer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SleepTimer)
{
    ui->setupUi(this);

    connect(ui->sliderBar, &QSlider::valueChanged, this, &SleepTimer::updateTimeLabel);

    ui->sliderBar->setMinimum(0);
    ui->sliderBar->setMaximum(120);

    QPixmap pix("/Users/bastien/Desktop/SleepTimer/logo.png");
    ui->label_image->setPixmap(pix);

    // Connecter le clic du bouton "pushButton" au slot "startShutdown"
    connect(ui->pushButton, &QPushButton::clicked, this, &SleepTimer::startShutdown);
}

SleepTimer::~SleepTimer()
{
    delete ui;
}

void SleepTimer::startShutdown()
{
    // Obtenir la valeur actuelle de la barre de défilement (en quarts d'heure)
    int quarters = ui->sliderBar->value();

    // Convertir la valeur en minutes (15 minutes par quart d'heure)
    int minutes = quarters * 15;

    if (minutes > 0)
    {
        // Réduire la fenêtre dans la barre des tâches du Mac
        this->showMinimized();

        // Créer un QTimer pour le délai en minutes
        QTimer *timer = new QTimer(this);
        timer->setSingleShot(true); // Le timer n'est déclenché qu'une seule fois

        // Connecter le signal timeout du timer à la fonction qui exécute la commande
        connect(timer, &QTimer::timeout, this, [this]() {
            int result = system("sudo shutdown -h now");

            if (result != 0)
            {
                // La commande a échoué
                QMessageBox::critical(this, "Erreur", "Échec de l'extinction.");
            }
        });

        // Définir le délai du timer en millisecondes (minutes * 60 000)
        timer->start(minutes * 60000);
    }
}

void SleepTimer::updateTimeLabel(int value)
{
    // La valeur "value" représente la position actuelle de la QSlider
    // Par exemple, si vous avez configuré votre QSlider pour des intervalles de 15 minutes, alors :
    int minutes = value;

    // Mettez à jour le texte du QLabel en fonction de la valeur en minutes
    ui->timeLabel->setText(QString::number(minutes) + " min");
}










