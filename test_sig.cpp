#include "test_sig.h"


Test_sig::Test_sig()
{
    item = new QGraphicsSvgItem(QString( "C:/Users/jgabon/Documents/testSVG/SVG_Logo.svg"));
    item1 = new QGraphicsSvgItem(QString( "C:/Users/jgabon/Documents/testSVG/SVG Logo Highlights.svg"));
}



void Test_sig::setHighlight(bool state) {
    // val is only set a new,
     // if a different value is actually passed.
    if(state)
        item1->show();
    else
        item1->hide();
 }


QGraphicsSvgItem * Test_sig::getItem( void ) {
    return item;
 }

QGraphicsSvgItem * Test_sig::getItem1( void ) {
    return item1;
 }



