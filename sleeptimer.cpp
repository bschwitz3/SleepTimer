#include "sleeptimer.h"
#include "./ui_sleeptimer.h"

SleepTimer::SleepTimer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SleepTimer)
{
    ui->setupUi(this);

    // Connecter le clic du bouton "pushButton" au slot "startShutdown"
    connect(ui->pushButton, &QPushButton::clicked, this, &SleepTimer::startShutdown);
}

SleepTimer::~SleepTimer()
{
    delete ui;
}

void SleepTimer::startShutdown()
{
    int minutes = ui->timeEdit->time().hour() * 60 + ui->timeEdit->time().minute();

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










