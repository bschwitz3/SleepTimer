#ifndef SLEEPTIMER_H
#define SLEEPTIMER_H

#include <QWidget>
#include <QProcess> // Inclure la bibliothèque QProcess
#include <QInputDialog>
#include <QMessageBox>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class SleepTimer; }
QT_END_NAMESPACE

class SleepTimer : public QWidget
{
    Q_OBJECT

public:
    SleepTimer(QWidget *parent = nullptr);
    ~SleepTimer();

private:
    Ui::SleepTimer *ui;
private slots:
    void startShutdown(); // Ajouter la déclaration de la fonction pour démarrer l'extinction
};
#endif // SLEEPTIMER_H
