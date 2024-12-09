#include <QApplication>
#include <QTextCodec>
#include <QTranslator>
#include "stamina.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setApplicationName(APPLICATION_NAME);
    QApplication::setOrganizationName(ORGANIZATION_NAME);

    QTranslator myTranslator;
    myTranslator.load("qstamina_" + QLocale::system().name(),QApplication::applicationDirPath()+"/Languages");
    a.installTranslator(&myTranslator);
#ifdef Q_OS_LINUX
    myTranslator.load("qstamina_" + QLocale::system().name(),"/usr/share/qstamina/translations");
    a.installTranslator(&myTranslator);
#endif
#ifdef Q_OS_MACX
    myTranslator.load("qstamina_" + QLocale::system().name(),QApplication::applicationDirPath()+"/../Languages");
    a.installTranslator(&myTranslator);

    QDir pluginsDir(QApplication::applicationDirPath()+"/../Plugins");
    a.setLibraryPaths(QStringList(pluginsDir.absolutePath()));
#endif
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    Stamina w;

    w.show();
    
    return a.exec();
}
