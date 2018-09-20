#include "algoritmos.h"
using namespace std;

Algoritmos::Algoritmos()
{

}

float Algoritmos :: cantFichasSolas(Grafo<int> grafo)
{
    list<Vertice> vertices;
    grafo.devolverVertices(vertices);
    list<Vertice> :: iterator it;
    int cont=0;
    for (it = vertices.begin() ; it!=vertices.end(); it++)
        if(((*it).getCantidad() == 1) && ((*it).getColor()==2))
            cont++;
    return cont;
}

bool Algoritmos:: puedeSacarFicha(Jugada jugada)
{
    if (jugada.getDestino()==25)
        return true;
    return false;
}

int Algoritmos:: cantFichasSacadas(Grafo<int> grafo)
{
    return grafo.devolverVertice(25).getCantidad();
}

float Algoritmos:: cantFichasComidas(Grafo<int> grafo)
{
    Vertice vertice= grafo.devolverVertice(26);
    return vertice.getCantidad();
}

bool Algoritmos:: origenEnElCuadrante(Jugada jugada)
{
    if (jugada.getOrigen()>18)
        return true;
    return false;
}

bool Algoritmos:: destinoEnElCuadrante(Jugada jugada)
{
    if ((jugada.getDestino()>18) && (jugada.getDestino()<25))
        return true;
    return false;
}


void Algoritmos::simularMovimiento (Grafo <int> & otroGrafo, int origen, int destino)
// Simula el movimiento de una ficha del vertice origen al vertice destino.
{

    Vertice vertice1 = otroGrafo.devolverVertice(origen);
    Vertice vertice2 = otroGrafo.devolverVertice(destino);


    if ((vertice1.getColor() == vertice2.getColor()) || (vertice2.getColor() == 0))
    {
        otroGrafo.modificarVertice(origen,vertice1.getCantidad()-1,vertice1.getColor());
        otroGrafo.modificarVertice(destino,vertice2.getCantidad()+1,vertice1.getColor());
        cout << "FICHA MOVIDA DEL VERTICE EN LA SIMULACION " << origen << " AL VERTICE " << destino << endl;
    }
    else
    {
        otroGrafo.modificarVertice(origen,vertice1.getCantidad()-1,vertice1.getColor());
        otroGrafo.modificarVertice(destino,1,vertice1.getColor());
        if (vertice1.getColor() == 2)
            otroGrafo.modificarVertice(26,otroGrafo.devolverVertice(26).getCantidad()+1,1);
        else
            otroGrafo.modificarVertice(-1,otroGrafo.devolverVertice(-1).getCantidad()+1,2);

        cout << "FICHA MOVIDA DEL VERTICE EN LA SIMULACION " << origen << " AL VERTICE " << destino << endl;
    }
}

int Algoritmos::cantFichasAdelante(Grafo<int> grafo, int pos)
{
    int cant = 0;
    list<Vertice> vertices;
    grafo.devolverVertices(vertices);
    list<Vertice> :: iterator it;

    for (it = vertices.begin(); it != vertices.end(); it++)
        if ((*it).getPosicion()>pos)
            cant += (*it).getCantidad();

    return cant;
}

int Algoritmos::posicionUltimaFicha(Grafo<int>grafo, int color)
{
    list<Vertice> vertices;
    grafo.devolverVertices(vertices);

    list<Vertice> :: iterator it;

    if (color==1)
    {
         it=vertices.end();
         while ((it!=vertices.begin()))
             if ((*it).getColor()==1)
                 return (*it).getPosicion();
             else
                 it--;
    }
    else
    {
        it=vertices.begin();
        while ((it!=vertices.end()))
            if ((*it).getColor()==2)
                return (*it).getPosicion();
            else
                it++;
    }

}

int Algoritmos::cantVerticesOcupados (Grafo<int> grafo)
{

    int cant = 0;
    list<Vertice> vertices;
    grafo.devolverVertices(vertices);
    list<Vertice> :: iterator it;

    for (it = vertices.begin(); it != vertices.end(); it++)
        if (((*it).getColor()==2) && (*it).getCantidad()>1 && ((*it).getPosicion()>6))
            cant ++;

    return cant;
}


float Algoritmos:: eval(Grafo<int> grafo,Jugada jugada1, Jugada jugada2)
 {

     float cont = 1;


     if (puedeSacarFicha(jugada1))
        cont = cont*10000;
     if (puedeSacarFicha(jugada2))
        cont = cont*10000;
     if (posicionUltimaFicha(grafo,2)<posicionUltimaFicha(grafo,1))
        if (cantFichasSolas(grafo)>0)
            cont = cont / (50 * cantFichasSolas(grafo));
     if (cantFichasComidas(grafo)>0)
        cont = cont * (30* cantFichasComidas(grafo));
     if (cantFichasSacadas(grafo)>0)
        cont = cont * (70 * cantFichasSacadas(grafo));
     //if (origenEnElCuadrante(jugada1) || origenEnElCuadrante(jugada2))
       // cont=cont/7;
     if ((destinoEnElCuadrante(jugada1) && (grafo.devolverVertice(jugada1.getDestino()).getCantidad()==1)) || (destinoEnElCuadrante(jugada2) && (grafo.devolverVertice(jugada2.getDestino()).getCantidad()==1)))
        cont=cont/700;
     cont=cont*cantVerticesOcupados(grafo);

     cout<<"cantidad Fichas Solas: "<<cantFichasSolas(grafo)<<endl;

     return cont;
 }
