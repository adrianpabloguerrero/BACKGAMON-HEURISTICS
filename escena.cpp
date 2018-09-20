#include "escena.h"

Escena::Escena()
{
    iniciar();
    mostrarMenu();
    iniciado=false;
}

void Escena::iniciar ()
{ 
    iniciarVariables();
    iniciarDados();
    crearFichas();
}

void Escena::iniciarVariables ()
{
    ax=0;
    ay=0;
    bx=0;
    by=0;
    origen=false;
    destino=false;
    fichasMeta1=0;
    fichasMeta2=0;
    this->img= new NoRoll;
    this->puntoPosible1= new Punto(3);
    this->puntoPosible2= new Punto (3);
    this->puntoActivo = new Punto (1);
    this->puntoJugador = new Punto (2);
}

void Escena::reestablecer()
{
    iniciado=false;
    mostrarMenu();
}

void Escena::iniciarDados ()
{
    this->dado1=new Dado;
    this->dado2=new Dado;
    dado1->setX(280);
    dado1->setY(250);
    dado2->setX(210);
    dado2->setY(250);
}

void Escena::mostrarDados ()
{
    this->removeItem(dado1);
    this->removeItem(dado2);
    dado1->visualizarDado(juego.devolverDado(1));
    dado2->visualizarDado(juego.devolverDado(2));
    this->addItem(dado1);
    this->addItem(dado2);
}

void Escena::mostrarMenu()
{
    this->addPixmap(QPixmap(":Imagenes/menuprincipal.jpg"));
}

void Escena::mostrarFondo (int num)
{
    if (num == 1)
        this->addPixmap(QPixmap(":Imagenes/tablero1.png"));
    else
        if (num == 2)
            this->addPixmap(QPixmap(":Imagenes/tablero2.png"));
}

void Escena::iniciarTablero ()
{
}

void Escena::crearFichas ()
{
    this->ficha1= new Ficha(1);
    this->ficha2= new Ficha(1);
    this->ficha3= new Ficha(1);
    this->ficha4= new Ficha(1);
    this->ficha5= new Ficha(1);
    this->ficha6= new Ficha(1);
    this->ficha7= new Ficha(1);
    this->ficha8= new Ficha(1);
    this->ficha9= new Ficha(1);
    this->ficha10= new Ficha(1);
    this->ficha11= new Ficha(1);
    this->ficha12= new Ficha(1);
    this->ficha13= new Ficha(1);
    this->ficha14= new Ficha(1);
    this->ficha15= new Ficha(1);
    this->ficha16= new Ficha(7);
    this->ficha17= new Ficha(7);
    this->ficha18= new Ficha(7);
    this->ficha19= new Ficha(7);
    this->ficha20= new Ficha(7);
    this->ficha21= new Ficha(7);
    this->ficha22= new Ficha(7);
    this->ficha23= new Ficha(7);
    this->ficha24= new Ficha(7);
    this->ficha25= new Ficha(7);
    this->ficha26= new Ficha(7);
    this->ficha27= new Ficha(7);
    this->ficha28= new Ficha(7);
    this->ficha29= new Ficha(7);
    this->ficha30= new Ficha(7);
}

void Escena::eliminarFichas()
{
    if (ficha1->getEstado()==true) {this->removeItem(ficha1); ficha1->setEstado(false);}
    if (ficha2->getEstado()==true) {this->removeItem(ficha2); ficha2->setEstado(false);}
    if (ficha3->getEstado()==true) {this->removeItem(ficha3); ficha3->setEstado(false);}
    if (ficha4->getEstado()==true) {this->removeItem(ficha4); ficha4->setEstado(false);}
    if (ficha5->getEstado()==true) {this->removeItem(ficha5);ficha5->setEstado(false);}
    if (ficha6->getEstado()==true) {this->removeItem(ficha6);ficha6->setEstado(false);}
    if (ficha7->getEstado()==true) {this->removeItem(ficha7);ficha7->setEstado(false);}
    if (ficha8->getEstado()==true) {this->removeItem(ficha8);ficha8->setEstado(false);}
    if (ficha9->getEstado()==true) {this->removeItem(ficha9);ficha9->setEstado(false);}
    if (ficha10->getEstado()==true) {this->removeItem(ficha10);ficha10->setEstado(false);}
    if (ficha11->getEstado()==true) {this->removeItem(ficha11);ficha11->setEstado(false);}
    if (ficha12->getEstado()==true) {this->removeItem(ficha12);ficha12->setEstado(false);}
    if (ficha13->getEstado()==true) { this->removeItem(ficha13);ficha13->setEstado(false);}
    if (ficha14->getEstado()==true) { this->removeItem(ficha14);ficha14->setEstado(false);}
    if (ficha15->getEstado()==true) {this->removeItem(ficha15);ficha15->setEstado(false);}
    if (ficha16->getEstado()==true) {this->removeItem(ficha16);ficha16->setEstado(false);}
    if (ficha17->getEstado()==true) {this->removeItem(ficha17);ficha17->setEstado(false);}
    if (ficha18->getEstado()==true) {this->removeItem(ficha18);ficha18->setEstado(false);}
    if (ficha19->getEstado()==true) {this->removeItem(ficha19);ficha19->setEstado(false);}
    if (ficha20->getEstado()==true) {this->removeItem(ficha20);ficha20->setEstado(false);}
    if (ficha21->getEstado()==true) {this->removeItem(ficha21);ficha21->setEstado(false);}
    if (ficha22->getEstado()==true) {this->removeItem(ficha22);ficha22->setEstado(false);}
    if (ficha23->getEstado()==true) {this->removeItem(ficha23);ficha23->setEstado(false);}
    if (ficha24->getEstado()==true) {this->removeItem(ficha24);ficha24->setEstado(false);}
    if (ficha25->getEstado()==true) {this->removeItem(ficha25);ficha25->setEstado(false);}
    if (ficha26->getEstado()==true) {this->removeItem(ficha26);ficha26->setEstado(false);}
    if (ficha27->getEstado()==true) {this->removeItem(ficha27);ficha27->setEstado(false);}
    if (ficha28->getEstado()==true) {this->removeItem(ficha28);ficha28->setEstado(false);}
    if (ficha29->getEstado()==true) {this->removeItem(ficha29);ficha29->setEstado(false);}
    if (ficha30->getEstado()==true) {this->removeItem(ficha30);ficha30->setEstado(false);}
}

void Escena:: mostrarFichas ()
{
    mostrarInterior();
    mostrarExterior();
}

void Escena::mostrarInterior()
{
    int pos=-1;
    int y=0;
    int x=0;

    while (pos<27)
    {
        if (pos<13)
             y=542;
        if (pos>12)
            y=-26;
        if (pos==-1)
            x=430;
        if (pos==26)
            x=430;
        if ((pos==1)||(pos==24))
            x=743;
        if ((pos==2)||(pos==23))
            x=694;
        if ((pos==3)||(pos==22))
            x=641;
        if ((pos==4)||(pos==21))
            x=590;
        if ((pos==5)||(pos==20))
            x=538;
        if ((pos==6)||(pos==19))
            x=487;
        if ((pos==7)||(pos==18))
            x=374;
        if ((pos==8)||(pos==17))
            x=322;
        if ((pos==9)||(pos==16))
            x=270;
        if ((pos==10)||(pos==15))
            x=218;
        if ((pos==11)||(pos==14))
            x=166;
        if ((pos==12)||(pos==13))
            x=114;
        if ((pos!=0) && (pos!=25))
        {
            int cantidadAgregada=0;
            Vertice C=juego.getDatosPosicion(pos);

            if (C.getColor()==1)
            {
                if ((cantidadAgregada<C.getCantidad())&&(ficha1->getEstado()==false)){ficha1->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30; ficha1->setY(y) ;this->addItem(ficha1); cantidadAgregada=cantidadAgregada+1;ficha1->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha2->getEstado()==false)){ficha2->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30; ficha2->setY(y);this->addItem(ficha2); cantidadAgregada=cantidadAgregada+1;ficha2->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha3->getEstado()==false)){ficha3->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha3->setY(y);this->addItem(ficha3); cantidadAgregada=cantidadAgregada+1;ficha3->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha4->getEstado()==false)){ficha4->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha4->setY(y);this->addItem(ficha4); cantidadAgregada=cantidadAgregada+1;ficha4->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha5->getEstado()==false)){ficha5->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha5->setY(y);this->addItem(ficha5); cantidadAgregada++;ficha5->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha6->getEstado()==false)){ficha6->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha6->setY(y);this->addItem(ficha6); cantidadAgregada++;ficha6->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha7->getEstado()==false)){ficha7->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha7->setY(y);this->addItem(ficha7); cantidadAgregada++;ficha7->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha8->getEstado()==false)){ficha8->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha8->setY(y);this->addItem(ficha8); cantidadAgregada++;ficha8->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha9->getEstado()==false)){ficha9->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha9->setY(y);this->addItem(ficha9); cantidadAgregada++;ficha9->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha10->getEstado()==false)){ficha10->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha10->setY(y);this->addItem(ficha10); cantidadAgregada++;ficha10->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha11->getEstado()==false)){ficha11->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha11->setY(y);this->addItem(ficha11); cantidadAgregada++;ficha11->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha12->getEstado()==false)){ficha12->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha12->setY(y);this->addItem(ficha12); cantidadAgregada++;ficha12->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha13->getEstado()==false)){ficha13->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha13->setY(y);this->addItem(ficha13); cantidadAgregada++;ficha13->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha14->getEstado()==false)){ficha14->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha14->setY(y);this->addItem(ficha14); cantidadAgregada++;ficha14->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha15->getEstado()==false)){ficha15->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha15->setY(y);this->addItem(ficha15); cantidadAgregada++;ficha15->setEstado(true);}
            }
            if (C.getColor()==2)
            {
                if ((cantidadAgregada<C.getCantidad())&&(ficha16->getEstado()==false)){ficha16->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha16->setY(y);this->addItem(ficha16); cantidadAgregada=cantidadAgregada+1;ficha16->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha17->getEstado()==false)){ficha17->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha17->setY(y);this->addItem(ficha17); cantidadAgregada=cantidadAgregada+1;ficha17->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha18->getEstado()==false)){ficha18->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha18->setY(y);this->addItem(ficha18); cantidadAgregada=cantidadAgregada+1;ficha18->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha19->getEstado()==false)){ficha19->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha19->setY(y);this->addItem(ficha19); cantidadAgregada=cantidadAgregada+1;ficha19->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha20->getEstado()==false)){ficha20->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha20->setY(y);this->addItem(ficha20); cantidadAgregada++;ficha20->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha21->getEstado()==false)){ficha21->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha21->setY(y);this->addItem(ficha21); cantidadAgregada++;ficha21->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha22->getEstado()==false)){ficha22->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;;ficha22->setY(y);this->addItem(ficha22); cantidadAgregada++;ficha22->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha23->getEstado()==false)){ficha23->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha23->setY(y);this->addItem(ficha23); cantidadAgregada++;ficha23->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha24->getEstado()==false)){ficha24->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha24->setY(y);this->addItem(ficha24); cantidadAgregada++;ficha24->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha25->getEstado()==false)){ficha25->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha25->setY(y);this->addItem(ficha25); cantidadAgregada++;ficha25->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha26->getEstado()==false)){ficha26->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha26->setY(y);this->addItem(ficha26); cantidadAgregada++;ficha26->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha27->getEstado()==false)){ficha27->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha27->setY(y);this->addItem(ficha27); cantidadAgregada++;ficha27->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha28->getEstado()==false)){ficha28->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha28->setY(y);this->addItem(ficha28); cantidadAgregada++;ficha28->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha29->getEstado()==false)){ficha29->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha29->setY(y);this->addItem(ficha29); cantidadAgregada++;ficha29->setEstado(true);}
                if ((cantidadAgregada<C.getCantidad())&&(ficha30->getEstado()==false)){ficha30->setX(x);if ((C.getCantidad()<=5)||(cantidadAgregada==0)) if (pos<13)y=y-46; else y=y+46;else if (C.getCantidad()>4) if (pos<13)y=y-30; else y=y+30;ficha30->setY(y);this->addItem(ficha30); cantidadAgregada++;ficha30->setEstado(true);}
            }
        }
        pos++;
    }
}

void Escena::mostrarExterior()
{
    bool cargado=false;
    int pos=0;
    int x=811;
    int y;
    while (!cargado)
    {
        Vertice C=juego.getDatosPosicion(pos);
        if (pos==0)
        {
            y=535-(fichasMeta1*10);
            while (fichasMeta1<C.getCantidad())
            {
                cout << "Cantidad de fichas vertice 0: "<< C.getCantidad();
                cout << "Cantidad de fichas fichasmeta1: "<<fichasMeta1;
                ficha31= new Ficha(4);
                fichasMeta1++;
                ficha31->setX(x);
                ficha31->setY(y);
                this->addItem(ficha31);
                y=y-10;
            }
        }
        if (pos==25)
        {
            y=98+(fichasMeta2*10);
            while (fichasMeta2<C.getCantidad())
            {
                ficha31= new Ficha(3);
                fichasMeta2++;
                ficha31->setX(x);
                ficha31->setY(y);
                this->addItem(ficha31);
                y=y+10;
            }
        }
        if (pos==25) cargado=true;
            pos=25;
    }
}

int Escena::asociar (int x, int y)
{

    if ((x>431) && (x<468) && (y>334) && (y<555))
        return -1;
    if ((x>431) && (x<468) && (y>15) && (y<222))
        return 26;
    if ((x>806) && (x<860) && (y>385) && (y<555))
        return 0;
    if ((x>747) && (x<784) && (y>288) && (y<540))
        return 1;
    if ((x>689) && (x<739) && (y>288) && (y<540))
        return 2;
    if ((x>637) && (x<685) && (y>288) && (y<540))
        return 3;
    if ((x>589) && (x<636) && (y>288) && (y<540))
        return 4;
    if ((x>535) && (x<588) && (y>288) && (y<540))
        return 5;
    if ((x>481) && (x<533) && (y>288) && (y<540))
        return 6;
    if ((x>369) && (x<420) && (y>288) && (y<540))
        return 7;
    if ((x>317) && (x<367) && (y>288) && (y<540))
        return 8;
    if ((x>267) && (x<316) && (y>288) && (y<540))
        return 9;
    if ((x>216) && (x<265) && (y>288) && (y<540))
        return 10;
    if ((x>163) && (x<214) && (y>288) && (y<540))
        return 11;
    if ((x>116) && (x<162) && (y>288) && (y<540))
        return 12;
    if ((x>747) && (x<784) && (y>19) && (y<288))
        return 24;
    if ((x>689) && (x<739) && (y>19) && (y<288))
        return 23;
    if ((x>637) && (x<685) && (y>19) && (y<288))
        return 22;
    if ((x>589) && (x<636) && (y>19) && (y<288))
        return 21;
    if ((x>535) && (x<588) && (y>19) && (y<288))
        return 20;
    if ((x>481) && (x<533) && (y>19) && (y<288))
        return 19;
    if ((x>369) && (x<420) && (y>19) && (y<288))
        return 18;
    if ((x>317) && (x<367) && (y>19) && (y<288))
        return 17;
    if ((x>267) && (x<316) && (y>19) && (y<288))
        return 16;
    if ((x>216) && (x<265) && (y>19) && (y<288))
        return 15;
    if ((x>163) && (x<214) && (y>19) && (y<288))
        return 14;
    if ((x>116) && (x<162) && (y>19) && (y<288))
        return 13;
    if ((x>806) && (x<860) && (y>80) && (y<288))
        return 25;
    return 0;
}

void Escena::asociarPunto(int pos, int &x, int &y)
{
    if (pos<13)
        y=550;
    else
        y=0;
    if ((pos==0)||(pos==25))
        x=811;
    if (pos==25)
        y=80;
    if (pos==-1)
        x=430;
    if (pos==26)
        x=430;
    if ((pos==1)||(pos==24))
        x=743;//743
    if ((pos==2)||(pos==23))
        x=691;
    if ((pos==3)||(pos==22))
        x=640;
    if ((pos==4)||(pos==21))
        x=589;
    if ((pos==5)||(pos==20))
        x=538;
    if ((pos==6)||(pos==19))
        x=486;
    if ((pos==7)||(pos==18))
        x=374;
    if ((pos==8)||(pos==17))
        x=321;
    if ((pos==9)||(pos==16))
        x=265;
    if ((pos==10)||(pos==15))
        x=220;
    if ((pos==11)||(pos==14))
        x=165;
    if ((pos==12)||(pos==13))
        x=114;
}

void Escena::mostrarPosibles (list <int> lista)
{
    if (!lista.empty())
    {
        list<int> :: iterator it;
        it=lista.begin();
        int x1,y1,x2,y2;
        asociarPunto(*it,x1,y1);
        puntoPosible1->setX(x1);
        puntoPosible1->setY(y1);
        this->addItem(puntoPosible1);
        cout << "PUNTO 1:" << *it << endl;
        it++;
        if ((*it)<=26)
        {
            asociarPunto(*it,x2,y2);
            puntoPosible2->setX(x2);
            puntoPosible2->setY(y2);
            this->addItem(puntoPosible2);
            cout << "PUNTO 2:" << *it << endl;
        }
    }
}

void Escena::mousePressEvent(QGraphicsSceneMouseEvent *eventoMouse)
{
    QPointF pos(eventoMouse->scenePos().x() ,eventoMouse->scenePos().y());
    if (iniciado==false)
    {
        if (pos.x() > 235 && pos.x() < 670 && pos.y() >350 && pos.y() <418)
        {
            juego.reestablecerTablero();
            mostrarFondo(1);
            iniciarVariables();
            eliminarFichas();
            mostrarFichas();
            this->addItem(img);
            this->removeItem(puntoJugador);
            puntoJugador->setX(26);

            if ((juego.getJugadorActivo()==1))
                puntoJugador->setY(303);
            else
                puntoJugador->setY(259);

            this->addItem(puntoJugador);
                cout << "JUGADOR ACTIVO: " << juego.getJugadorActivo() << endl;
            iniciado=true;
            juego.modificarJugadores(1);
        }
        if (pos.x() > 235 && pos.x() < 670 && pos.y() >438 && pos.y() <502)
        {
            juego.reestablecerTablero();
            mostrarFondo(2);
            iniciarVariables();
            eliminarFichas();
            mostrarFichas();
            this->addItem(img);
            this->removeItem(puntoJugador);
            puntoJugador->setX(26);

            if ((juego.getJugadorActivo()==1))
                puntoJugador->setY(303);
            else
                puntoJugador->setY(259);

            this->addItem(puntoJugador);
                cout << "JUGADOR ACTIVO: " << juego.getJugadorActivo() << endl;
            iniciado=true;
            juego.modificarJugadores(2);
        }
    }
    else
    {
        if (juego.juegoTerminado()==0)
        {
            if ((pos.x()>806) && (pos.x()<860) && (pos.y()>10) && (pos.y()<60))
                reestablecer();
            else
            {
                this->removeItem(puntoActivo);
                this->removeItem(puntoPosible1);
                this->removeItem(puntoPosible2);
                if (pos.x() > 520 && pos.y() > 200 && pos.x() < 688 && pos.y() < 300 && juego.devolverDado(1)==0 && juego.devolverDado(2)==0)
                {
                    juego.tirarDados();
                    mostrarDados();
                    if ((juego.getJugadores()==1)&&(juego.getJugadorActivo()==2))
                    {
                        juego.jugarPC();
                        eliminarFichas();
                        mostrarFichas();
                        if (juego.juegoTerminado()==2)
                             this->addPixmap(QPixmap(":Imagenes/blancasgana.png"));

                    }
                    cout << "DADO 1: " << juego.devolverDado(1) << endl;
                    cout << "DADO 2: " << juego.devolverDado(2) << endl;
                    if (!juego.hayMovimientos(juego.getJugadorActivo()))
                    {
                        cout << "El jugador no tiene movimientos posibles. " << endl;
                        juego.pasarTurno();
                        juego.modificarJugadorActivo();
                    }
                }
                else
                {
                    if ((juego.devolverDado(1)!=0) || juego.devolverDado(2)!=0)
                    {
                        if ((origen==true) && (destino==true))
                        {
                            origen=false;
                            destino=false;
                        }
                        if (origen==false)
                        {
                            ax=pos.x();
                            ay=pos.y();
                            int x;
                            int y;
                            int a=asociar (ax,ay);
                            if (juego.getJugadorActivo()==juego.devolverVertice(a).getColor())
                            {
                                origen=true;
                                asociarPunto(a,x,y);
                                puntoActivo->setX(x);
                                puntoActivo->setY(y);
                                this->addItem(puntoActivo);
                                list <int> lista;
                                juego.movimientosPosibles(a,lista);
                                mostrarPosibles(lista);
                            }
                        }
                        else
                        {
                            bx=pos.x();
                            by=pos.y();
                            destino=true;
                            int a=asociar(ax,ay);
                            int b=asociar(bx,by);
                            juego.moverFicha(a,b);
                            eliminarFichas();
                            mostrarFichas();
                            mostrarDados();

                            if (!juego.hayMovimientos(juego.getJugadorActivo()))
                            {
                                cout << "El jugador no tiene movimientos posibles. " << endl;
                                juego.pasarTurno();
                            }
                            if ((juego.devolverDado(1)==0) && juego.devolverDado(2)==0)
                            {
                                juego.modificarJugadorActivo();

                            }
                        }
                    }
                }
                if (((juego.devolverDado(1))!=0)||(juego.devolverDado(2)!=0))
                    this->removeItem(img);
                else
                    this->addItem(img);

                this->removeItem(puntoJugador);

                if ((juego.getJugadorActivo()==1))
                    puntoJugador->setY(303);
                else
                    puntoJugador->setY(259);

                this->addItem(puntoJugador);
                    cout << "JUGADOR ACTIVO: " << juego.getJugadorActivo() << endl;

                if (juego.juegoTerminado()==1)
                     this->addPixmap(QPixmap(":Imagenes/negrasganas.png"));
                if (juego.juegoTerminado()==2)
                     this->addPixmap(QPixmap(":Imagenes/blancasgana.png"));
            }
        }
        else
        {
            QPointF pos(eventoMouse->scenePos().x() ,eventoMouse->scenePos().y());

            if (pos.x() > 100 && pos.y() > 197 && pos.x() < 253 && pos.y() < 380)
                reestablecer();
        }
   }
}

Escena::~Escena()
{

}

