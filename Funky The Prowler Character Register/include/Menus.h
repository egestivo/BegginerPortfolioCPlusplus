#ifndef MENUS_H
#define MENUS_H

#include <windows.h>
#include "Personaje.h"

class Menus{
    public:
        //Para un menú interactivo
        void gotoxy(int x, int y);

        //Leer opción para las flechas del menu principal
        int leerOpcion();

        //Leer opcion para las flechas del criterio de menuBuscar
        int leerOpcionBuscar();

        //Leer opcion para las flechas del menuAlias
        int leerOpcionAlias();

        //Leer opcion para flechas del menuBuscarPor:
        int leerOpcionBusquedaPor();

        //Leer opcion para flechas del menuMostrarPor:
        int leerOpcionMostrarPor();

        //Leer opcion para las flechas del menuSexo
        sexo leerOpcionSexo();

        //Leer opcion para las flechas del menuMostrar
        sexo leerOpcionMostrarPorGenero();

        //Menu para buscar por alias o por nombre
        void menuBuscar(int opcionSeleccionada);

        //Menu personaje tiene alias o no, retorna un entero para ingresar el alias si es 1
        //y si es 2 entonces procede a ingresar el nombre
        void menuAlias(int opcionSeleccionada);

        //Menu para buscar por alias o por nombre
        void menuBusquedaPor(int opcionSeleccionada);

        //Menu para mostrar por genero
        void menuMostrarPor(int opcionSeleccionada);

        //Menu para elegir el sexo
        void menuSexo(int opcionSeleccionada);

        //Menu para buscar por genero
        void menuMostrarPorGenero(int opcionSeleccionada);

        //Mostrar menu cada vez que actuen las flechas: registro, busqueda, eliminacion, mostrar y salir
        void mostrarMenu(int opcionSeleccionada);


};

#endif