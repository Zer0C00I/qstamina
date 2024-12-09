#include "textfield.h"

TextField::TextField(Sounds *sounds, QWidget *parent) :
    QWidget(parent),
    m_sounds( sounds )
{
}

void TextField::keyPressed(QString)
{
}

void TextField::setText(QString)
{
}

QString TextField::nextSymbol()
{
    return QString("");
}

void TextField::reset()
{
}

void TextField::start()
{
}

void TextField::stop()
{
}


int TextField::rightSymbols()
{
    return m_rightSymbols;
}

int TextField::countSymbols()
{
    return m_countSymbols;
}

int TextField::wrongSymbols()
{
    return m_wrongSymbols;
}

void TextField::setFontPixelSize(int size)
{
    m_fontPixelSize = size;
}

void TextField::resizeEvent(QResizeEvent *)
{
}
