#ifndef JUGADA_H
#define JUGADA_H


class Jugada
{
    public:
        Jugada();
        Jugada(int origen, int destino);
        int getOrigen() const;
        int getDestino() const;
        void setOrigen(int origen);
        void setDestino(int destino);
        void imprimir() const;
        void reset();
        Jugada & operator=(const Jugada & otraJ);
        int diferencia();

    private:
        int origen;
        int destino;
};

#endif // JUGADA_H
