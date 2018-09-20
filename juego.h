#ifndef JUEGO_H
#define JUEGO_H

#include "Vertice.h"
#include "Grafo.h"
#include "Dado.h"
#include <list>
#include "jugada.h"
#include "Algoritmos.h"

class Juego
{
public:
    Juego();
    void iniciarTablero();
    Vertice getDatosPosicion (int posicion) const;
    bool movimientoValido(Grafo<int> g, int origen, int destino);
    bool puedeSacar (Grafo<int> g, int color);
    void reestablecerTablero();
    bool fichaComida(Grafo<int> g, int color);
    void actualizarDados(int origen, int destino);
    void mover(int origen, int destino);
    void moverFicha(int origen, int destino);
    bool puedeMoverFicha(Grafo<int> &g, int origen, int destino);
    bool movimientoDado(int origen, int destino);
    int devolverDado (int numero);
    void tirarDados();
    void imprimirTablero();
    int juegoTerminado();
    void modificarJugadorActivo();
    int getJugadorActivo();
    bool dadosDobles();
    void movimientosPosibles(Grafo<int> g, int posicion, list<int> & movimientos);
    void movimientosPosibles(int posicion, list<int> & movimientos);
    bool hayMovimientos(int color);
    void obtenerMovimientos(Grafo<int> g, int color, list<Jugada> & movimientos);
    void pasarTurno();
    void modificarDado(int dado, int valor);
    bool poseeFichasAnteriores(Grafo<int> g, int pos);
    int getJugadores();
    void modificarJugadores(int num);
    void jugarPC();
    list<Jugada> colaDePrioridades(list<Jugada> movimientos);
    Vertice devolverVertice (int pos);

    ~Juego();

private:
    bool jugadorNegroActivo;
    int jugadores;
    Grafo<int> grafo;
    Algoritmos algoritmo;
    Dado dado1;
    Dado dado2;
};

#endif // JUEGO_H
