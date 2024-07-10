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
        
        //Funciones específicas del menu
        //Registrar personaje
        void registrarPersonaje();

        //Buscar por alias
        void buscarPorAlias(const std::string& alias);

        //Buscar por nombre
        void buscarPorNombre(const std::string& nombre);

        //Buscar personaje por Alias o nombre según la elección
        void buscarPersonaje(const std::string& criterioBusqueda);

        //Eliminar por alias
        void eliminarPorAlias(const std::string& alias);

        //Eliminar por nombre
        void eliminarPorNombre(const std::string& nombre);

        //Eliminar principal para llamar por alias o nombre
        void eliminarPersonaje();

        //Mostrar todos los personajes
        void mostrarPersonajes();

        //mostrar todos los personajes masculinos o femeninos
        void mostrarPersonajesPorSexo();

};


#endif