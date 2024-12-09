#ifndef STAMINA_H
#define STAMINA_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QDir>
#include <QFile>
#include <QSettings>
#include <QTimer>
#include <QTime>
#include <QLabel>
#include <QList>
#include <QRegExp>

#include <QDebug>
#include <QKeyEvent>

#include <QMessageBox>

#include <QStandardPaths>

#include "config.h"
#include "results.h"
#include "about.h"
#include "textfield.h"
#include "settingsform.h"
#include "keyboard.h"
#include "lessongenerator.h"
#include "inlinefield.h"
#include "sounds.h"

namespace Ui {
class Stamina;
}

class Stamina : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Stamina(QWidget *parent = 0);
    ~Stamina();
    
private:
    Ui::Stamina *ui;

    Config *m_config;
    Sounds *m_sounds;

    bool m_lessonStarted;
    QMenu *m_lessonsMenu;
    QMenu *m_layoutsMenu;
    QMenu *m_generatorMenu;
    SettingsForm *m_settings;

    Keyboard *m_keyboard;

    TextField *m_textfield;

    void keyPressEvent(QKeyEvent * event);
    void loadLessonsMenu();
    void loadLayoutMenu();
    void loadGeneratorMenu();
    void loadGeneratedLessons();
    void loadLesson(Lesson *);
    void loadCurrentLayout();
    void endLesson();

    float m_time;
    int m_typeLastSecond;
    float m_speed;
    QTimer *m_timer;
    QMenuBar *m_mainMenu;

    bool m_lessonLoaded;

    QList<int> m_speedBySecond;
    QList<float> m_avgSpeedBySecond;
private slots:
    void lessonChoosed();
    void generatedlessonChoosed();
    void layoutChoosed();
    void timeout();
    void on_pushButton_released();
    void aboutTriggered();
    void settingsTriggered();
    void settingsSaved();
    void generatorTriggered();
};

#endif // STAMINA_H
