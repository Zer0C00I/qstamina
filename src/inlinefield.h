#ifndef INLINEFIELD_H
#define INLINEFIELD_H

#include "textfield.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QDebug>
#include <QResizeEvent>

#include "sounds.h"

class InlineField : public TextField
{
public:
    InlineField(Sounds *sounds, QWidget *parent = 0);
    void keyPressed(QString key);
    void setText(QString text);

    QString nextSymbol();
    void reset();
    void setFontPixelSize(int);
protected:
    virtual void resizeEvent(QResizeEvent *);
private:
    QLabel *m_newText;
    QLabel *m_oldText;
    QHBoxLayout *m_layout;

};

#endif // INLINEFIELD_H
