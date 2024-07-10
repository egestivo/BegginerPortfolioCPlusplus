//Source file for Lista Simple 

#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\ListaSimple.h"
#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Validaciones.h"
#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Menus.h"
#include <iostream>

//Variable global para las validaciones
Validaciones valid;

//Constructor por defecto
ListaSimple::ListaSimple(): cabeza(nullptr), cola(nullptr) {};

//Destructor
ListaSimple::~ListaSimple(){
    delete cabeza;
}

//Insertar nodo
void ListaSimple::insertarNodo(Personaje* personaje){
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->setPersonaje(personaje);

    if(cabeza == nullptr){
        cabeza = nuevoNodo;
        cola = nuevoNodo;
    }else{
        cola->setSiguiente(nuevoNodo);
        cola = nuevoNodo;
    }
}

//Eliminar por alias
void ListaSimple::eliminarPorAlias(const std::string& alias){
    Nodo* aux = cabeza;
    Nodo* auxAnterior = nullptr;
    while(aux != nullptr){
        if(aux->getPersonaje()->getAlias() == alias){
            if(aux == cabeza){
                cabeza = aux->getSiguiente();
            }else if(aux == cola){
                cola = auxAnterior;
                cola->setSiguiente(nullptr);
            }else{
                auxAnterior->setSiguiente(aux->getSiguiente());
            }
            delete aux;
            return;
        }
        auxAnterior = aux;
        aux = aux->getSiguiente();
    }
}

//Eliminar por nombre
void ListaSimple::eliminarPorNombre(const std::string& nombre){
    Nodo* aux = cabeza;
    Nodo* auxAnterior = nullptr;
    while(aux != nullptr){
        if(aux->getPersonaje()->getNombre() == nombre){
            if(aux == cabeza){
                cabeza = aux->getSiguiente();
            }else if(aux == cola){
                cola = auxAnterior;
                cola->setSiguiente(nullptr);
            }else{
                auxAnterior->setSiguiente(aux->getSiguiente());
            }
            delete aux;
            return;
        }
        auxAnterior = aux;
        aux = aux->getSiguiente();
    }
}

//Eliminar personaje por Alias o nombre según la elección
void ListaSimple::eliminarPersonaje(){
    Menus menu;

    int opcionSeleccionada = menu.leerOpcionBusquedaPor();
    menu.menuBusquedaPor(opcionSeleccionada);
    bool valido = false;
    std::string argument;
    if (opcionSeleccionada == 1){
        do {
            std::cout << "Ingrese alias: ";
            argument = valid.leerNombre();
            if (valid.validarNombre(argument)) {
                valido = true;
            }
            else {
                std::cout << "Alias no valido. Intente nuevamente." << std::endl;
            }
        } while (!valido);
        eliminarPorAlias(argument);
    } else {
        do {
            std::cout << "Ingrese nombre: ";
            argument = valid.leerNombre();
            if (valid.validarNombre(argument)) {
                valido = true;
            }
            else {
                std::cout << "Nombre no valido. Intente nuevamente." << std::endl;
            }
        } while (!valido);
        eliminarPorNombre(argument);
    }
}
