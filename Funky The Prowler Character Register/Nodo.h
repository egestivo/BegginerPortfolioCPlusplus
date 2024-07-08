//Header de Nodo para listas simples

#ifndef NODO_H
#define NODO_H

#include "Personaje.h"

class Nodo{
    private:
        Personaje* personaje;
        Nodo* cabeza;
        Nodo* siguiente;
    public:
        //Constructor por defecto
        Nodo(): personaje(new Personaje(0,"Funky", "Estivo", "Ona","25-06-2004", 17, masculino, 1.63, 55.2)),cabeza(nullptr), siguiente(nullptr) {};
        //Destructor
        ~Nodo(){};
        //Get and set para personaje y cabeza
        Personaje* getPersonaje(){return personaje;};
        void setPersonaje(Personaje* personaje){this->personaje = personaje;};

        Nodo* getCabeza(){return cabeza;};
        void setCabeza(Nodo* cabeza){this->cabeza = cabeza;};

        Nodo* getSiguiente(){return siguiente;};
        void setSiguiente(Nodo* siguiente){this->siguiente = siguiente;};

};

#endif