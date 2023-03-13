#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsSvgItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QGraphicsSvgItem *getItem();
    QGraphicsSvgItem *getItem1();
    Ui::MainWindow *getUi();

     // public Q_SLOT:
     // void setHighlightW(bool state);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QGraphicsSvgItem *item;
    QGraphicsSvgItem *item1;

};
#endif // MAINWINDOW_H
