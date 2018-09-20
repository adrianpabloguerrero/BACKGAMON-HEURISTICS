#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QGraphicsView>
#include <QWidget>
#include <iostream>
#include <dialog.h>
#include <dialog2.h>


#include"escena.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:


    void on_actionNuevo_juego_triggered();

    void on_actionSalir_triggered();

    void on_actionComo_jugar_triggered();

    void on_actionSobre_Backgammon_triggered();

private:
    Ui::MainWindow *ui;
    QGraphicsView *view;
    Escena *scene;

};

#endif // MAINWINDOW_H
