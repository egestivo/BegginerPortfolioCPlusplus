#ifndef MENUS_H
#define MENUS_H

#include <windows.h>
#include "Personaje.h"

class Menus{
    public:
        //Para un menú interactivo
        void gotoxy(int x, int y);

        //Leer opción para las flechas
        int leerOpcion();

        //Menu personaje tiene alias o no
        void menuAlias();

        //Menu para elegir el sexo
        void menuSexo();

        //Menu principal: Registro, busqueda, eliminación, mostrar lista de personajes, salir
        void menuPrincipal();

};

#endif