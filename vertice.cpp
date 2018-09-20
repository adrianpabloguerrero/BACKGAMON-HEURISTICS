#include "Vertice.h"

Vertice::Vertice()
{
    this->posicion = 0;
    this->cantidad = 0;
    this->color = 0;
}

Vertice::Vertice(int posicion, int cantidad, int color)
{
    this->posicion = posicion;
    this->cantidad = cantidad;
    this->color = color;
}

Vertice::~Vertice()
{
}

void Vertice::modificarCantidad(int cantidad)
{
    this->cantidad = cantidad;
}

void Vertice::modificarPosicion(int posicion)
{
    this->posicion = posicion;
}

void Vertice::modificarColor(int color)
{
    this->color = color;
}

int Vertice::getPosicion() const
{
    return this->posicion;
}

int Vertice::getCantidad() const
{
    return this->cantidad;
}

int Vertice::getColor() const
{
    return this->color;
}
