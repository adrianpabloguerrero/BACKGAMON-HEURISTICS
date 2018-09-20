#ifndef ESCENA_H
#define ESCENA_H

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>
#include <QWidget>
#include <QPointF>
#include <list>


#include "ficha.h"
#include "vertice.h"
#include "Grafo.h"
#include "juego.h"
#include "noroll.h"
#include "punto.h"



using namespace std;

class Escena: public QGraphicsScene,QGraphicsPixmapItem
{
public:
    Escena();
    void iniciar();
    void mostrarFichas ();
    void crearFichas ();
    void iniciarTablero ();
    void eliminarFichas();
    void mostrarFondo(int num);
    void mostrarExterior ();
    void mostrarInterior();
    void iniciarDados ();
    void mostrarDados ();
    int asociar (int x, int y);
    void iniciarVariables();
    void asociarPunto (int pos, int & x,int & y);
    void mostrarMenu ();
    void reestablecer();
    void mostrarPosibles (list <int> lista);

    ~Escena();

protected:
      void mousePressEvent(QGraphicsSceneMouseEvent *eventoMouse);



private:

      Ficha * ficha1;
      Ficha * ficha2;
      Ficha * ficha3;
      Ficha * ficha4;
      Ficha * ficha5;
      Ficha * ficha6;
      Ficha * ficha7;
      Ficha * ficha8;
      Ficha * ficha9;
      Ficha * ficha10;
      Ficha * ficha11;
      Ficha * ficha12;
      Ficha * ficha13;
      Ficha * ficha14;
      Ficha * ficha15;
      Ficha * ficha16;
      Ficha * ficha17;
      Ficha * ficha18;
      Ficha * ficha19;
      Ficha * ficha20;
      Ficha * ficha21;
      Ficha * ficha22;
      Ficha * ficha23;
      Ficha * ficha24;
      Ficha * ficha25;
      Ficha * ficha26;
      Ficha * ficha27;
      Ficha * ficha28;
      Ficha * ficha29;
      Ficha * ficha30;
      Ficha * ficha31;

      int fichasMeta1;
      int fichasMeta2;

      bool origen;
      bool destino;

      bool iniciado;

      int ax;
      int ay;
      int bx;
      int by;

      NoRoll * img;
      Punto * puntoActivo;
      Punto * puntoJugador;
      Punto * puntoPosible1;
      Punto * puntoPosible2;


      Dado * dado1;
      Dado * dado2;

      Juego juego;
};


#endif // ESCENA_H
