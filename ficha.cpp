#include "ficha.h"



Ficha::Ficha(int color)
{
    this->setPixmap(QPixmap(":/Imagenes/ficha"+QString::number(color)+".png"));
    this->estado=false;
}


void Ficha::setEstado (bool estado)
{
    this->estado=estado;
}

bool Ficha::getEstado()
{
    return estado;
}

Ficha::~Ficha()
{

}

