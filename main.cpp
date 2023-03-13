#include "test_sig.h"
#include "mainwindow.h"

#include <QApplication>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QImage>
#include <QWidget>
#include <QSvgWidget>
#include <QtSvg>
#include <QWheelEvent>
#include <QKeyEvent>
#include <iostream>
#include <QTimer>
#include <QObject>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    QSvgWidget w(QString( "C:/Users/jgabon/Documents/testSVG/SVG_Logo.svg"));
//    QSvgWidget w1(QString( "C:/Users/jgabon/Documents/testSVG/SVG Logo Highlights.svg"));
//    // w.resize (300,300);
//    // w.set
//    w.show ();
//    w1.show ();
//    return a.exec();

//}






///* Test de surlignage fonctionnel */

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    // MainWindow mainW = new MainWindow();
//    Test_sig *svg_layers= new Test_sig(); // Création objet contenant les couches SVG

//    QCheckBox *PB=new QCheckBox(); // Bouton validation

//    PB->setChecked(true); // Initialisation à vrai

//    QGraphicsScene scene; // Scène contenant des Widgets et des Item

//    scene.addWidget(PB); // Ajout du Widget bouton validation
//    scene.addItem (svg_layers->getItem()); // Ajout de l'item pour le SVG original
//    scene.addItem (svg_layers->getItem1()); // Ajout de l'item pour la surbillance

//    QGraphicsView view; // Création d'une vue

//    view.setScene (&scene); // On met la scene dans la vue

//    /* Définition d'une connexion entre le bouton validation et l'objet contenant les SVG. Lien entre l'état bouton une fois cliqué et la méthode setHighlight (booléen obligatoire dans les deux méthode) */
//     QObject::connect(PB, SIGNAL( clicked(bool) ), svg_layers, SLOT( setHighlight(bool) ));


//    view.show (); // Affichage de la vue

//    return a.exec();

//}


/* Test de surlignage avec QWidget et QLayout */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *mainW = new MainWindow;


    mainW->show();
    return a.exec();

}



 // Essai superposition QSvgWidget sur QWidget
//int main(int argc, char *argv[])
//{
//   QApplication app(argc, argv);
//   QWidget* win = new QWidget;
//   QSvgWidget *wsvg = new QSvgWidget("C:/Users/jgabon/Documents/testSVG/SVG_Logo.svg");
//   QSvgWidget *wsvg1 = new QSvgWidget("C:/Users/jgabon/Documents/testSVG/SVG Logo Highlights.svg");
//   QVBoxLayout* layout = new QVBoxLayout(win);
//   // QVBoxLayout* layout1 = new QVBoxLayout(win);
//   QPushButton* but1 = new QPushButton("About Qt");

//    // add widgets to the vertical box
//    layout->addWidget(but1);
//    layout->addWidget(wsvg);
//    layout->addWidget(wsvg1); // Essai d'ajout d'un widget sur un autre
//    // layout->insertLayout(0, layout1);


//   // make signal-and-slot connections
//    QObject::connect( but1, SIGNAL( clicked() ), &app, SLOT( aboutQt() ) );
//    QObject::connect( but1, SIGNAL( clicked() ), win, SLOT( showNormal() ) );
//    // show window
//    win->show();
//    return app.exec();
//}



/* Exemple pour superposer */

// // simple message box
// void MyMessageBox(Test_sig& a,Test_sig& b,QString title) {
// QString Qstr, Qval;
// // Tinker the string together
// Qstr.append(title); Qstr.append("\na: ");
// Qval.setNum(a.value()); Qstr.append(Qval);
// Qstr.append("\nb: "); Qval.setNum(b.value());
// Qstr.append(Qval);
// QMessageBox::information(
//NULL, "MyClass Information", Qstr, QMessageBox::Ok);
// }


// int main(int argc, char *argv[]) {
// QApplication app(argc, argv);
// // Two Test_sig objects
// Test_sig *a = new Test_sig();
// Test_sig *b = new Test_sig();
// // The signal of the one is sent to the slot
//  // connected to the other object.
// QObject::connect( a, SIGNAL( valueChanged(int) ),
//b, SLOT( setValue(int) ) );
// // b.val gets the value 100
// b->setValue( 100 );
// MyMessageBox(*a, *b, "b->setValue(100)");
// // a.val gets the value 99. Through the signal slot
//  // Link now also gets the value 99 for b.val
// a->setValue( 99 );
// // The proof
// MyMessageBox(*a, *b, "a->setValue(99)");
// return 0;
// }

