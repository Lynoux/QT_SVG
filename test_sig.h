#ifndef TEST_SIG_H
#define TEST_SIG_H

#include <QGraphicsSvgItem>
#include <QObject>

// A class that has signals and slots.
class Test_sig: public QObject
{
    Q_OBJECT
public:
    Test_sig();
    QGraphicsSvgItem *getItem();
    QGraphicsSvgItem *getItem1();
    public slots:

    public slots:
    void setHighlight(bool);

private:

 QGraphicsSvgItem *item;
 QGraphicsSvgItem *item1;

};

#endif // TEST_SIG_H
