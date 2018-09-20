#include "punto.h"

Punto::Punto(int color)
{
    this->setPixmap(QPixmap(":/Imagenes/punto"+QString::number(color)+".png"));

}

Punto::~Punto()
{

}

