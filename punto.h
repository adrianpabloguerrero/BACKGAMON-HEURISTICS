#ifndef PUNTO_H
#define PUNTO_H

#include <QGraphicsPixmapItem>



class Punto: public QGraphicsPixmapItem
{
public:
    Punto(int color);
    ~Punto();
};

#endif // PUNTO_H
