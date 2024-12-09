#ifndef TEXTFIELD_H
#define TEXTFIELD_H

#include <QWidget>
#include <QDebug>

#include "sounds.h"

class TextField : public QWidget
{
    Q_OBJECT
public:
    explicit TextField(Sounds *sounds, QWidget *parent = 0);
    virtual void keyPressed(QString);
    virtual void setText(QString);
    virtual QString nextSymbol();
    virtual void reset();
    virtual void start();
    virtual void stop();
    int rightSymbols();
    int countSymbols();
    int wrongSymbols();

    virtual void setFontPixelSize(int);
protected:
    QString m_text;
    int m_typeRights;
    int m_width;
    int m_height;
    int m_rightSymbols;
    int m_countSymbols;
    int m_wrongSymbols;

    int m_fontPixelSize;

    Sounds *m_sounds;

    virtual void resizeEvent(QResizeEvent *);
signals:
    void noMoreText();
public slots:
    
};

#endif // TEXTFIELD_H
