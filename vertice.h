#ifndef VERTICE_H
#define VERTICE_H


class Vertice
{
    public:
        Vertice();
        Vertice(int posicion, int cantidad, int color);
        virtual ~Vertice();
        void modificarPosicion(int posicion);
        void modificarCantidad(int cantidad);
        void modificarColor(int color);
        int getPosicion() const;
        int getCantidad() const;
        int getColor() const;

    private:
        int posicion;
        int cantidad;
        int color;
};

#endif // VERTICE_H
