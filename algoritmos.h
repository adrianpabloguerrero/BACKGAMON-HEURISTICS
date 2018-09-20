#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include "Grafo.h"
#include "jugada.h"
#include <list>
#include <iostream>
using namespace std;

class Algoritmos
{
public:
    Algoritmos();
    void simularMovimiento (Grafo <int> & otroGrafo, int origen, int destino);
    float eval(Grafo<int> grafo, Jugada jugada1,Jugada jugada2);
    float cantFichasSolas(Grafo<int> grafo);
    bool puedeSacarFicha(Jugada jugada);
    list<Jugada> colaDePrioridades(Grafo<int> grafo, list<Jugada> movimientos);
    float cantFichasComidas(Grafo<int> grafo);
    int cantFichasSacadas(Grafo<int> grafo);
    bool origenEnElCuadrante(Jugada jugada);
    bool destinoEnElCuadrante(Jugada jugada);
    int cantFichasAdelante(Grafo<int> grafo, int pos);
    int posicionUltimaFicha(Grafo<int>grafo, int color);
    int cantVerticesOcupados(Grafo<int>grafo);


};
#endif // ALGORITMOS_H
