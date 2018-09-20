#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QHBoxLayout *layout = new QHBoxLayout();
    view = new QGraphicsView();
    layout->addWidget(view);
    view->setObjectName("graphicsView");

    scene = new Escena();
    view->setScene(scene);
    view->setSceneRect(scene->sceneRect());

    view->setFixedSize(905,565);

    QWidget *wlayout = new QWidget();
    wlayout->setLayout(layout);
    setCentralWidget(wlayout);
    move(180,40);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNuevo_juego_triggered()
{
    scene->reestablecer();
}

void MainWindow::on_actionSalir_triggered()
{
     close();
}

void MainWindow::on_actionComo_jugar_triggered()
{
    Dialog *ventana=new Dialog(this) ;
    ventana->setModal(true);
    ventana->show();
}

void MainWindow::on_actionSobre_Backgammon_triggered()
{
    Dialog2 *ventana1=new Dialog2(this) ;
    ventana1->setModal(true);
    ventana1->show();
}
