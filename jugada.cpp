#include "jugada.h"
#include <iostream>
using namespace std;

Jugada::Jugada()
{
    origen = -2;
    destino = -2;
}

Jugada::Jugada(int origen,int destino)
{
    this->origen = origen;
    this->destino = destino;
}

int Jugada::getOrigen() const
{
    return this->origen;
}

int Jugada::getDestino() const
{
    return this->destino;
}

void Jugada::setOrigen(int origen)
{
    this->origen = origen;
}

void Jugada::setDestino(int destino)
{
    this->destino = destino;
}

Jugada & Jugada::operator=(const Jugada & otraJ)
{
    origen = otraJ.getOrigen();
    destino = otraJ.getDestino();
}

void Jugada::imprimir() const
{
    cout << origen << "  -  " << destino << endl;
}

int Jugada::diferencia()
{
    return destino-origen;
}

void Jugada::reset()
{
    origen=-2;
    destino=-2;
}
