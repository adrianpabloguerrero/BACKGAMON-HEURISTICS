#ifndef FICHA_H
#define FICHA_H

#include <QGraphicsPixmapItem>



class Ficha: public QGraphicsPixmapItem
{
public:
    Ficha(int color);
    bool getEstado ();
    void setEstado (bool estado);
    ~Ficha();

private:

      bool estado;
};

#endif // FICHA_H
