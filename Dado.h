#ifndef DADO_H
#define DADO_H
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <QGraphicsPixmapItem>

using namespace std;

class Dado: public QGraphicsPixmapItem
{
    public:
        Dado();
        virtual ~Dado();
        void tirarDado();
        void imprimirDado();
        int  getValor();
        void modificarDado(int numero);
        bool getdoble();
        void modificarDoble(bool doble);
        void visualizarDado (int numero);

    private:
        int valor;
        bool doble;
};

#endif // DADO_H
