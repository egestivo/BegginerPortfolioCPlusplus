//Header for lista simple with Nodo.h

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple{
    private:
        Nodo* cabeza;
        Nodo* cola;
    public:
        //Constructor por defecto
        ListaSimple(): cabeza(nullptr), cola(nullptr) {};
        //Destructor
        ~ListaSimple(){};
        //Get and set para cabeza y cola
        Nodo* getCabeza(){return cabeza;};
        void setCabeza(Nodo* cabeza){this->cabeza = cabeza;};

        Nodo* getCola(){return cola;};
        void setCola(Nodo* cola){this->cola = cola;};

        void insertarNodo(Personaje* personaje);
        void mostrarLista();
        void eliminarNodo(short int id);
        void buscarNodo(short int id);
};


#endif