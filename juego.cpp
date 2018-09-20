#include "Juego.h"

Juego::Juego()
{
    iniciarTablero();
    jugadores = 0;
}

Vertice Juego::getDatosPosicion(int posicion) const
{
    return grafo.devolverVertice(posicion);
}

void Juego::iniciarTablero()
{
    Vertice vertice00(-1,0,0);
    Vertice vertice0(0,0,0);
    Vertice vertice1(1,5,1);
    Vertice vertice2(2,1,1);
    Vertice vertice3(3,3,1);
    Vertice vertice4(4,3,1);
    Vertice vertice5(5,2,1);
    Vertice vertice6(6,1,1);
    Vertice vertice7(7,0,0);
    Vertice vertice8(8,0,0);
    Vertice vertice9(9,0,0);
    Vertice vertice10(10,0,0);
    Vertice vertice11(11,0,0);
    Vertice vertice12(12,0,0);
    Vertice vertice13(13,0,0);
    Vertice vertice14(14,0,0);
    Vertice vertice15(15,0,0);
    Vertice vertice16(16,0,0);
    Vertice vertice17(17,0,0);
    Vertice vertice18(18,0,0);
    Vertice vertice19(19,1,2);
    Vertice vertice20(20,1,2);
    Vertice vertice21(21,3,2);
    Vertice vertice22(22,5,2);
    Vertice vertice23(23,5,2);
    Vertice vertice24(24,0,0);
    Vertice vertice25(25,0,0);
    Vertice vertice26(26,0,0);
    grafo.agregarVertice(vertice00);
    grafo.agregarVertice(vertice0);
    grafo.agregarVertice(vertice1);
    grafo.agregarVertice(vertice2);
    grafo.agregarVertice(vertice3);
    grafo.agregarVertice(vertice4);
    grafo.agregarVertice(vertice5);
    grafo.agregarVertice(vertice6);
    grafo.agregarVertice(vertice7);
    grafo.agregarVertice(vertice8);
    grafo.agregarVertice(vertice9);
    grafo.agregarVertice(vertice10);
    grafo.agregarVertice(vertice11);
    grafo.agregarVertice(vertice12);
    grafo.agregarVertice(vertice13);
    grafo.agregarVertice(vertice14);
    grafo.agregarVertice(vertice15);
    grafo.agregarVertice(vertice16);
    grafo.agregarVertice(vertice17);
    grafo.agregarVertice(vertice18);
    grafo.agregarVertice(vertice19);
    grafo.agregarVertice(vertice20);
    grafo.agregarVertice(vertice21);
    grafo.agregarVertice(vertice22);
    grafo.agregarVertice(vertice23);
    grafo.agregarVertice(vertice24);
    grafo.agregarVertice(vertice25);
    grafo.agregarVertice(vertice26);
    grafo.agregarArco(-1, 1, 1);
    grafo.agregarArco(1, -1, 1);
    grafo.agregarArco(0, 1, 1);
    grafo.agregarArco(1, 0, 1);
    grafo.agregarArco(1, 2, 1);
    grafo.agregarArco(2, 1, 1);
    grafo.agregarArco(2, 3, 1);
    grafo.agregarArco(3, 2, 1);
    grafo.agregarArco(3, 4, 1);
    grafo.agregarArco(4, 3, 1);
    grafo.agregarArco(4, 5, 1);
    grafo.agregarArco(5, 4, 1);
    grafo.agregarArco(5, 6, 1);
    grafo.agregarArco(6, 5, 1);
    grafo.agregarArco(6, 7, 1);
    grafo.agregarArco(7, 6, 1);
    grafo.agregarArco(7, 8, 1);
    grafo.agregarArco(8, 7, 1);
    grafo.agregarArco(8, 9, 1);
    grafo.agregarArco(9, 8, 1);
    grafo.agregarArco(9, 10, 1);
    grafo.agregarArco(10, 9, 1);
    grafo.agregarArco(10, 11, 1);
    grafo.agregarArco(11, 10, 1);
    grafo.agregarArco(11, 12, 1);
    grafo.agregarArco(12, 11, 1);
    grafo.agregarArco(12, 13, 1);
    grafo.agregarArco(13, 12, 1);
    grafo.agregarArco(13, 14, 1);
    grafo.agregarArco(14, 13, 1);
    grafo.agregarArco(14, 15, 1);
    grafo.agregarArco(15, 14, 1);
    grafo.agregarArco(15, 16, 1);
    grafo.agregarArco(16, 15, 1);
    grafo.agregarArco(16, 17, 1);
    grafo.agregarArco(17, 16, 1);
    grafo.agregarArco(17, 18, 1);
    grafo.agregarArco(18, 17, 1);
    grafo.agregarArco(18, 19, 1);
    grafo.agregarArco(19, 18, 1);
    grafo.agregarArco(19, 20, 1);
    grafo.agregarArco(20, 19, 1);
    grafo.agregarArco(20, 21, 1);
    grafo.agregarArco(21, 20, 1);
    grafo.agregarArco(21, 22, 1);
    grafo.agregarArco(22, 21, 1);
    grafo.agregarArco(22, 23, 1);
    grafo.agregarArco(23, 22, 1);
    grafo.agregarArco(23, 24, 1);
    grafo.agregarArco(24, 23, 1);
    grafo.agregarArco(24, 25, 1);
    grafo.agregarArco(25, 24, 1);
    grafo.agregarArco(24, 26, 1);
    grafo.agregarArco(26, 24, 1);
    grafo.inicializarMatrices();
    grafo.generarMatrizCostos();
}

void Juego::reestablecerTablero()
// Reestablece por defecto un tablero ya creado.
{
   /* grafo.modificarVertice(-1,2,2);
    grafo.modificarVertice(0,0,0);
    grafo.modificarVertice(1,0,0);
    grafo.modificarVertice(2,3,1);
    grafo.modificarVertice(3,3,1);
    grafo.modificarVertice(4,2,1);
    grafo.modificarVertice(5,2,1);
    grafo.modificarVertice(6,5,1);
    grafo.modificarVertice(7,0,0);
    grafo.modificarVertice(8,0,0);
    grafo.modificarVertice(9,0,0);
    grafo.modificarVertice(10,0,0);
    grafo.modificarVertice(11,0,0);
    grafo.modificarVertice(12,0,0);
    grafo.modificarVertice(13,0,0);
    grafo.modificarVertice(14,0,0);
    grafo.modificarVertice(15,0,0);
    grafo.modificarVertice(16,0,0);
    grafo.modificarVertice(17,0,0);
    grafo.modificarVertice(18,0,0);
    grafo.modificarVertice(19,0,0);
    grafo.modificarVertice(20,2,2);
    grafo.modificarVertice(21,2,2);
    grafo.modificarVertice(22,3,2);
    grafo.modificarVertice(23,3,2);
    grafo.modificarVertice(24,3,2);
    grafo.modificarVertice(25,0,0);
    grafo.modificarVertice(26,0,0);*/
    grafo.modificarVertice(-1,0,0);
    grafo.modificarVertice(0,0,0);
    grafo.modificarVertice(1,2,2);
    grafo.modificarVertice(2,0,0);
    grafo.modificarVertice(3,0,0);
    grafo.modificarVertice(4,0,0);
    grafo.modificarVertice(5,0,0);
    grafo.modificarVertice(6,5,1);
    grafo.modificarVertice(7,0,0);
    grafo.modificarVertice(8,3,1);
    grafo.modificarVertice(9,0,0);
    grafo.modificarVertice(10,0,0);
    grafo.modificarVertice(11,0,0);
    grafo.modificarVertice(12,5,2);
    grafo.modificarVertice(13,5,1);
    grafo.modificarVertice(14,0,0);
    grafo.modificarVertice(15,0,0);
    grafo.modificarVertice(16,0,0);
    grafo.modificarVertice(17,3,2);
    grafo.modificarVertice(18,0,0);
    grafo.modificarVertice(19,5,2);
    grafo.modificarVertice(20,0,0);
    grafo.modificarVertice(21,0,0);
    grafo.modificarVertice(22,0,0);
    grafo.modificarVertice(23,0,0);
    grafo.modificarVertice(24,2,1);
    grafo.modificarVertice(25,0,0);
    grafo.modificarVertice(26,0,0);

    srand (time(NULL));
    jugadorNegroActivo = rand() % 2;

    cout << "Jugador: "<< jugadorNegroActivo<< endl;
    cout << "Juego reestablecido." << endl;

    dado1.modificarDado(0);
    dado1.modificarDoble(0);
    dado2.modificarDado(0);
    dado2.modificarDoble(0);
}

bool Juego::puedeSacar(Grafo<int> g, int color)//*
{
    list<Vertice> vertices;
    g.devolverVertices(vertices);
    list<Vertice> :: iterator it;

    if (color == 1)
    {
        for(it = vertices.begin(); it != vertices.end(); it++)
            if (it->getPosicion() > 6)
                if ((it->getColor() == 1) && (it->getCantidad() > 0))
                    return false;
        return true;
    }

    if (color== 2)
    {
        for(it = vertices.begin(); it != vertices.end(); it++)
            if (it->getPosicion() < 19)
                if ((it->getColor() == 2) && (it->getCantidad() > 0))
                    return false;
        return true;
    }
    return false;
}

Vertice Juego::devolverVertice (int pos)
{
    return grafo.devolverVertice(pos);
}

bool Juego::movimientoValido(Grafo<int> g, int origen, int destino)//*
// Devuelve verdadero si el movimiento que desea realizar es posible, caso contrario falso.
{
    Vertice vertice1 = g.devolverVertice(origen);
    Vertice vertice2 = g.devolverVertice(destino);

    if ((jugadorNegroActivo) && (vertice1.getColor()!= 1))
        return false;

    if ((!jugadorNegroActivo) && (vertice1.getColor()!= 2))
        return false;

    if ((destino == -1) || (destino == 26))
        return false;

    if (vertice1.getCantidad() == 0)
        return false;
    else
    {
        if ((origen == 25) || (origen == 0) || (origen == destino))
            return false;

        if ((vertice1.getColor() == 1) && (destino == 25))
            return false;

        if ((vertice1.getColor() == 2) && (destino == 0))
            return false;

        if ((vertice2.getColor() == 0) || (vertice1.getColor() == vertice2.getColor()))
        {
            if (vertice1.getColor() == 2)
            {
                if (destino < origen)
                    return false;
                else
                {
                    if (destino == 25)
                        return puedeSacar(g,vertice1.getColor());
                    else
                        return true;
                }
            }
            if (vertice1.getColor() == 1)
            {
                if (destino > origen)
                    return false;
                else
                {
                    if (destino == 0)
                        return puedeSacar(g,vertice1.getColor());
                    else
                        return true;
                }
            }
        }
        else
        {
            if ((vertice1.getColor() != vertice2.getColor()) && (vertice2.getCantidad() == 1))
            {
                if (vertice1.getColor() == 2)
                {
                    if (destino < origen)
                        return false;
                    else
                        return true;
                }
                if (vertice1.getColor() == 1)
                {
                    if (origen <= destino)
                        return false;
                    else
                        return true;
                }
            }
            else
                return false;
        }
    }
}

bool Juego::fichaComida(Grafo<int> g, int color)//*
// Devuelve verdadero si, dado un color, ?ste posee alguna ficha comida, caso contrario falso.
{
    if (color == 1)
    {
        if (g.devolverVertice(26).getCantidad() > 0)
            return true;
        else return false;
    }
    if (color == 2)
    {
        if (g.devolverVertice(-1).getCantidad() > 0)
            return true;
        else return false;
    }
    return false;
}

void Juego::actualizarDados(int origen, int destino)
{
    if (grafo.devolverCosto(origen,destino)==dado1.getValor())
    {
        if (dado1.getdoble())
            dado1.modificarDoble(0);
        else
            dado1.modificarDado(0);
    }
    else
        if (grafo.devolverCosto(origen,destino)==dado2.getValor())
        {
            if (dado2.getdoble())
                dado2.modificarDoble(0);
            else
                dado2.modificarDado(0);
        }
        else
            if (dado1.getValor()>dado2.getValor())
            {
                if (dado1.getdoble())
                    dado1.modificarDoble(0);
                else
                    dado1.modificarDado(0);
            }
            else
            {
                if (dado2.getdoble())
                    dado2.modificarDoble(0);
                else
                    dado2.modificarDado(0);
            }
}

void Juego::mover(int origen, int destino)
// Realiza el movimiento de una ficha del vertice origen al vertice destino.
{
    Vertice vertice1 = grafo.devolverVertice(origen);
    Vertice vertice2 = grafo.devolverVertice(destino);

    actualizarDados(origen,destino);

    if ((vertice1.getColor() == vertice2.getColor()) || (vertice2.getColor() == 0))
    {
        grafo.modificarVertice(origen,vertice1.getCantidad()-1,vertice1.getColor());
        grafo.modificarVertice(destino,vertice2.getCantidad()+1,vertice1.getColor());
        cout << "FICHA MOVIDA DEL VERTICE " << origen << " AL VERTICE " << destino << endl;
    }
    else
    {
        grafo.modificarVertice(origen,vertice1.getCantidad()-1,vertice1.getColor());
        grafo.modificarVertice(destino,1,vertice1.getColor());
        if (vertice1.getColor() == 2)
            grafo.modificarVertice(26,grafo.devolverVertice(26).getCantidad()+1,1);
        else
            grafo.modificarVertice(-1,grafo.devolverVertice(-1).getCantidad()+1,2);

        cout << "FICHA MOVIDA DEL VERTICE " << origen << " AL VERTICE " << destino << endl;
    }
    cout << "DADO 1: " << devolverDado(1) << endl;
    cout << "DADO 2: " << devolverDado(2) << endl;
}

bool Juego::puedeMoverFicha(Grafo<int> &g,int origen, int destino)//*
// Comprueba que el movimiento de ficha del vertice origen a destino sea valido.
// Si es valido retorna true. Si no es valido retorna false.
{
    Vertice vertice1 = g.devolverVertice(origen);
    Vertice vertice2 = g.devolverVertice(destino);

    if ((origen==25) || (origen==0))
        return false;
    else
    {
        if (((vertice1.getColor() == 1) && (jugadorNegroActivo)) || ((vertice1.getColor() == 2) && (!jugadorNegroActivo)))
            if (((destino == 0) && (jugadorNegroActivo)) || ((destino == 25) && (!jugadorNegroActivo)))
                if (puedeSacar(g,vertice1.getColor()))
                    if ((grafo.devolverCosto(origen,destino)<dado1.getValor()) || (grafo.devolverCosto(origen,destino)<dado2.getValor()))
                        if (!poseeFichasAnteriores(g,origen))
                            return true;

        if (fichaComida(g,vertice1.getColor()))
        {
            if (((vertice1.getColor() == 1) && (origen == 26)) || ((vertice1.getColor() == 2) && (origen == -1)))
            {
                if ((movimientoDado(origen,destino)) && (movimientoValido(g,origen,destino)))
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
        else
        {
            //cout << movimientoDado(origen,destino) << " " << movimientoValido(origen,destino) << " - de " << origen << " a " << destino << " - Color: " << jugadorNegroActivo<< endl;
            if ((movimientoDado(origen,destino)) && (movimientoValido(g,origen,destino)))
                return true;
            else
                return false;
        }
    }
}

void Juego::moverFicha(int origen, int destino)
{
    if (puedeMoverFicha(grafo,origen,destino))
        mover(origen,destino);
    else
        cout << "NO ES POSIBLE MOVER UNA FICHA DEL VERTICE " << origen << " AL VERTICE " << destino << endl;
}


bool Juego::poseeFichasAnteriores(Grafo<int> g, int pos)//*
{
    Vertice vertice1 = g.devolverVertice(pos);
    if (vertice1.getColor() == 1)
    {
        for (int i=6; i>pos; i--)
        {
            Vertice vertice2 = g.devolverVertice(i);
            if ((vertice2.getCantidad() > 0) && (vertice2.getColor() == 1))
                return true;
        }
        return false;
    }
    else
        if (vertice1.getColor() == 2)
        {
            for (int i=19; i<pos; i++)
            {
                Vertice vertice2 = g.devolverVertice(i);
                if ((vertice2.getCantidad() > 0) && (vertice2.getColor() == 2))
                    return true;
            }
            return false;
        }
        else
            return false;
}

bool Juego::movimientoDado(int origen, int destino)//*
{
    if ((grafo.devolverCosto(origen,destino)==dado1.getValor()) || (grafo.devolverCosto(origen,destino)==dado2.getValor()))
        return true;
    else
        return false;
}

void Juego::tirarDados ()
{
    dado1.tirarDado();
    dado2.tirarDado();
    if (dadosDobles())
    {
        dado1.modificarDoble(1);
        dado2.modificarDoble(1);
    }
    else
    {
        dado1.modificarDoble(0);
        dado2.modificarDoble(0);
    }
}

int Juego::devolverDado (int numero)
//Funcion necesaria para visualizar los dados en pantalla.
{
    if (numero==1) return dado1.getValor();
        return dado2.getValor();
}

void Juego::imprimirTablero()
{
    //cout << grafo;
    grafo.imprimirMatrices();
}

int Juego::juegoTerminado()
{
    Vertice negro = grafo.devolverVertice(0);
    Vertice blanco = grafo.devolverVertice(25);

    if (negro.getCantidad() == 15)
    {
        cout << "JUEGO TERMINADO!! JUGADOR NEGRO GANA!!" << endl;
        return 1;
    }
    else if (blanco.getCantidad() == 15)
    {
        cout << "JUEGO TERMINADO!! JUGADOR BLANCO GANA!!" << endl;
        return 2;
    }
    else return 0;

}

void Juego::modificarJugadorActivo()
{
    if (jugadorNegroActivo)
        jugadorNegroActivo = false;
    else
        jugadorNegroActivo = true;
}

int Juego::getJugadorActivo()
{
    if (jugadorNegroActivo)
        return 1;
    else
        return 2;
}

bool Juego::dadosDobles()
{
    return (dado1.getValor() == dado2.getValor());
}

void Juego::movimientosPosibles(Grafo<int> g, int posicion, list<int> & movimientos)
{
    list<int> :: iterator mov;
    list<Vertice> vertices;
    g.devolverVertices(vertices);
    list<Vertice> :: iterator it;
    for(it = vertices.begin(); it != vertices.end(); it++)
        if (puedeMoverFicha(g,posicion,it->getPosicion()))
            movimientos.push_back(it->getPosicion());
}

void Juego::movimientosPosibles(int posicion, list<int> &movimientos)
// Redefinicion del metodo para poder ser utilizado en la parte grafica.
{
    movimientosPosibles(grafo,posicion,movimientos);
}

bool Juego::hayMovimientos(int color)
{
    list<Jugada> movimientos;
    movimientos.clear();
    obtenerMovimientos(grafo,color,movimientos);
    if (movimientos.empty())
        return false;
    else
        return true;
}

void Juego::obtenerMovimientos(Grafo<int> g, int color,list<Jugada> & movimientos)//*
{
    list<Vertice> vertices;
    g.devolverVertices(vertices);
    list<Vertice> :: iterator it;
    movimientos.clear();
    for(it = vertices.begin(); it != vertices.end(); it++)
        if (it->getColor() == color)
        {
            list<int> mov;
            movimientosPosibles(g,it->getPosicion(),mov);
            list<int> :: iterator it2;
            for(it2 = mov.begin(); it2 != mov.end(); it2++)
            {
                Jugada movimiento(it->getPosicion(),*it2);
                movimientos.push_back(movimiento);
            }
        }
    list<Jugada> :: iterator movi;
    for(movi = movimientos.begin(); movi != movimientos.end(); movi++)
        cout << "Movimiento Posible: " << movi->getOrigen() << " a " << movi->getDestino() << endl;
}

void Juego::pasarTurno()
{
    dado1.modificarDado(0);
    dado1.modificarDoble(0);
    dado2.modificarDado(0);
    dado2.modificarDoble(0);
}

void Juego::modificarDado(int dado,int valor)
{
    if (dado == 1)
        dado1.modificarDado(valor);
    else
        dado2.modificarDado(valor);
}

int Juego::getJugadores()
{
    return jugadores;
}

void Juego::modificarJugadores(int num)
{
    jugadores = num;
}

void Juego::jugarPC()
{
    /*dado1.modificarDado(6);
    dado1.modificarDoble(0);
    dado2.modificarDado(5);
    dado2.modificarDoble(0);*/

    list<Jugada> jugadas;
    while ((!juegoTerminado()) && ((dado1.getValor()!=0)||(dado2.getValor()!=0)))
    {
        jugadas.clear();
        cout << "MOVIMIENTOS 1: "<< endl;
        obtenerMovimientos(grafo,2,jugadas);
        cout<<"Dado 1: "<<dado1.getValor()<< endl;
        cout<<"Dado 2: "<<dado2.getValor()<< endl;
        if (!jugadas.empty())
        {
            list<Jugada> solucion= colaDePrioridades(jugadas);
            moverFicha(solucion.front().getOrigen(),solucion.front().getDestino());
            solucion.pop_front();
            if(!solucion.empty())
            {
                moverFicha(solucion.front().getOrigen(),solucion.front().getDestino());
                solucion.pop_front();
            }
            else pasarTurno();
        }
        else
            pasarTurno();
    }
    pasarTurno();
}

list<Jugada> Juego :: colaDePrioridades(list<Jugada> movimientos)
{
    Dado d1;
    d1.modificarDado(dado1.getValor());
    d1.modificarDoble(dado1.getdoble());
    Dado d2;
    d2.modificarDado(dado2.getValor());
    d2.modificarDoble(dado2.getdoble());
    Grafo <int> otroGrafo = grafo;
    list<Jugada> solucion;
    list<Jugada> :: iterator jugada1;
    list<Jugada> :: iterator jugada2;
    float mejor = 0;
    for (jugada1 = movimientos.begin(); jugada1 != movimientos.end(); jugada1++)
    {

        algoritmo.simularMovimiento(otroGrafo,(*jugada1).getOrigen(),(*jugada1).getDestino());
        actualizarDados((*jugada1).getOrigen(),(*jugada1).getDestino());
        cout << "DADO 1: " << dado1.getValor() << endl;
        cout << "DADO 2: " << dado2.getValor() << endl;
        list<Jugada> movimientos2;
        cout << "MOVIMIENTOS 2: "<< endl;
        obtenerMovimientos(otroGrafo,2,movimientos2);
        if (movimientos2.empty())
        {

            float actual = algoritmo.eval(otroGrafo,(*jugada1),(*jugada1));
            cout << "Valor de eval del movimiento  " <<(*jugada1).getOrigen()<< " - " << (*jugada1).getDestino()<< ": " << actual << endl;
            if (actual > mejor)
            {
                mejor = actual;
                solucion.clear();
                solucion.push_front(*jugada1);
            }
            otroGrafo = grafo;
            dado1.modificarDado(d1.getValor());
            dado1.modificarDoble(d1.getdoble());
            dado2.modificarDado(d2.getValor());
            dado2.modificarDoble(d2.getdoble());
        }
        else
        {
            for (jugada2 = movimientos2.begin(); jugada2 != movimientos2.end(); jugada2++)
            {
                if (puedeMoverFicha(otroGrafo,(*jugada2).getOrigen(),(*jugada2).getDestino()))
                {
                    algoritmo.simularMovimiento(otroGrafo,(*jugada2).getOrigen(),(*jugada2).getDestino());
                    //actualizarDados((*jugada2).getOrigen(),(*jugada2).getDestino());
                    cout << "DADO 1: " << dado1.getValor() << endl;
                    cout << "DADO 2: " << dado2.getValor() << endl;
                    float actual = algoritmo.eval(otroGrafo,(*jugada1),(*jugada2));
                    cout << "Valor de eval del movimiento  " <<(*jugada1).getOrigen()<< " - " << (*jugada1).getDestino()<< " // "<<(*jugada2).getOrigen()<< " - " << (*jugada2).getDestino()<<": " << actual << endl;
                    if (actual > mejor)
                    {
                        mejor = actual;
                        solucion.clear();
                        solucion.push_front(*jugada2);
                        solucion.push_front(*jugada1);
                    }
                    algoritmo.simularMovimiento(otroGrafo,(*jugada2).getDestino(),(*jugada2).getOrigen());
               }
            }
            otroGrafo = grafo;
            dado1.modificarDado(d1.getValor());
            dado1.modificarDoble(d1.getdoble());
            dado2.modificarDado(d2.getValor());
            dado2.modificarDoble(d2.getdoble());
        }
    }
    cout<<"Mejor: "<<mejor<<endl;
    return solucion;
}

Juego::~Juego()
{
}

