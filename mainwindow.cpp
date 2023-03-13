#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test_sig.h"
#include <QMessageBox>
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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Test_sig *SVGs = new Test_sig;
   QGraphicsScene *scene = new QGraphicsScene; // Scène contenant des Widgets et des Item
   // this->item = new QGraphicsSvgItem(QString( "C:/Users/jgabon/Documents/testSVG/SVG_Logo.svg"));
   // this->item1 = new QGraphicsSvgItem(QString( "C:/Users/jgabon/Documents/testSVG/SVG Logo Highlights.svg"));
   scene->addText("Hello, world!");

   scene->addItem (SVGs->getItem()); // Ajout de l'item pour le SVG original
   scene->addItem (SVGs->getItem1()); // Ajout de l'item pour la surbillance


   ui->setupUi(this);
   ui->checkBox->setChecked(true);
   ui->graphicsView->setScene(scene);
   ui->graphicsView->show();

   QObject::connect(ui->checkBox, SIGNAL( clicked(bool) ), SVGs, SLOT(setHighlight(bool)));
}


MainWindow::~MainWindow()
{
    delete ui;
}



//void MainWindow::setHighlightW(bool state) {
//    // val is only set a new,
//     // if a different value is actually passed.
//    if(state)
//         item1->show();

//    else
//        item1->hide();

// }

