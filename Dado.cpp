#include "Dado.h"

Dado::Dado()
{
    srand (time(NULL));
    valor = 0;
    doble = 0;
}

Dado::~Dado()
{

}

void Dado :: tirarDado()
{
    valor = rand() % 6 + 1;
}

void Dado :: imprimirDado()
{
    cout << "Valor del Dado:" << valor << "\n";
}

int Dado::getValor()
{
    return valor;
}



void Dado :: visualizarDado (int valor)
{
        this->setPixmap(QPixmap(":/Imagenes/Dado"+QString::number(valor)+".png"));
}

void Dado::modificarDado(int numero)
{
    valor = numero;
}

bool Dado::getdoble()
{
    return doble;
}

void Dado::modificarDoble(bool doble)
{
    this->doble = doble;
}

