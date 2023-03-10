#include "mainwindow.h"
#include "ui_mainwindow.h"
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
   ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
