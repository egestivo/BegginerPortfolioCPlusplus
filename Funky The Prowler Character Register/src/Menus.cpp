//Source file for Menus.cpp

#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Menus.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//Función para mover el cursor a una posición específica
void Menus::gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//Función para leer la opción de las flechas del menu principal
int Menus::leerOpcion() {
    int opcion = 1;

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 5;
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 5) opcion = 1;
                    break;
                case 13: // Enter
                    return opcion;
            }
        }
    }
}

//Seleccion de la opción de las flechas de menuBuscar
int Menus::leerOpcionBuscar() {
    int opcion = 1;
    menuBuscar(opcion);

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 2;
                    menuBuscar(opcion);
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 2) opcion = 1;
                    menuBuscar(opcion);
                    break;
                case 13: // Enter
                    return opcion;
            }
        }
    }
}

//Leer opción para el menuAlias
int Menus::leerOpcionAlias() {
    int opcion = 1;
    menuAlias(opcion);

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 2;
                    menuAlias(opcion);
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 2) opcion = 1;
                    menuAlias(opcion);
                    break;
                case 13: // Enter
                    return opcion;
            }
        }
    }
}

//Leer opción para el menuBuscarPor
int Menus::leerOpcionBusquedaPor() {
    int opcion = 1;
    menuBusquedaPor(opcion);

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 2;
                    menuBusquedaPor(opcion);
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 2) opcion = 1;
                    menuBusquedaPor(opcion);
                    break;
                case 13: // Enter
                    return opcion;
            }
        }
    }
}

//Leer opción para el menuMostrarPor
int Menus::leerOpcionMostrarPor() {
    int opcion = 1;
    menuMostrarPor(opcion);

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 2;
                    menuMostrarPor(opcion);
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 2) opcion = 1;
                    menuMostrarPor(opcion);
                    break;
                case 13: // Enter
                    return opcion;
            }
        }
    }
}

//Leer opción para el menuSexo
sexo Menus::leerOpcionSexo() {
    int opcion = 1;
    menuSexo(opcion);

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 2;
                    menuSexo(opcion);
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 2) opcion = 1;
                    menuSexo(opcion);
                    break;
                case 13: // Enter
                    return (sexo)opcion;
            }
        }
    }
}

//Leer opción para el menuBuscar por genero
sexo Menus::leerOpcionMostrarPorGenero() {
    int opcion = 1;

    while (true) {
        if (_kbhit()) {
            char tecla = _getch();

            switch (tecla) {
                case 72: // Flecha arriba
                    opcion--;
                    if (opcion < 1) opcion = 2;
                    break;
                case 80: // Flecha abajo
                    opcion++;
                    if (opcion > 2) opcion = 1;
                    break;
                case 13: // Enter
                    return (sexo)opcion;
            }
        }
    }
}

//Menu para buscar por alias o por nombre
void Menus::menuBuscar(int opcionSeleccionada) {
    system("cls");
    gotoxy(15, 2); cout << "==== ¿Cómo desea buscar al personaje? ====";
    gotoxy(15, 4); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "Por Alias";
    gotoxy(15, 5); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "Por Nombre";
    gotoxy(15, 7); cout << "===============================";
}

//Menu que retorna un entero para determinar si el personaje tiene Alias o no
void Menus::menuAlias(int opcionSeleccionada) {
    gotoxy(15, 2); cout << "\n==== ¿El personaje tiene alias? ====";
    gotoxy(15, 4); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "Si";
    gotoxy(15, 5); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "No";
    gotoxy(15, 7); cout << "===============================";
}

//Menu para buscar por alias o por nombre
void Menus::menuBusquedaPor(int opcionSeleccionada) {
    system("cls");
    gotoxy(15, 2); cout << "==== Desea buscar por: ====";
    gotoxy(15, 4); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "Alias";
    gotoxy(15, 5); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "Nombre";
    gotoxy(15, 7); cout << "===============================";
}

//Menu para mostrar por genero
void Menus::menuMostrarPor(int opcionSeleccionada) {
    system("cls");
    gotoxy(15, 2); cout << "==== Mostrar todos los personajes de género: ====";
    gotoxy(15, 4); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "Masculino";
    gotoxy(15, 5); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "Femenino";
    gotoxy(15, 7); cout << "===============================";
}


//Menu para seleccionar el sexo del personaje
void Menus::menuSexo(int opcionSeleccionada) {
    gotoxy(1, 12); cout << "==== ¿Cuál es el sexo del personaje? ====";
    gotoxy(1, 14); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "Masculino";
    gotoxy(1, 16); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "Femenino";
    gotoxy(1, 20); cout << "===============================\n";
}

//Menu para buscar por genero
void Menus::menuMostrarPorGenero(int opcionSeleccionada) {
    system("cls");
    gotoxy(15, 2); cout << "==== ¿Por cuál genero desea buscar? ====";
    gotoxy(15, 4); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "Masculino";
    gotoxy(15, 5); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "Femenino";
    gotoxy(15, 7); cout << "===============================";
}

//Muestra el menu cada vez que actuan las flechas
void Menus::mostrarMenu(int opcionSeleccionada) {
    system("cls");
    gotoxy(15, 2); cout << "==== Menú Principal ====";
    gotoxy(15, 4); cout << (opcionSeleccionada == 1 ? "==>" : "   ") << "1.Registro";
    gotoxy(15, 5); cout << (opcionSeleccionada == 2 ? "==>" : "   ") << "2.Búsqueda";
    gotoxy(15, 6); cout << (opcionSeleccionada == 3 ? "==>" : "   ") << "3.Eliminación";
    gotoxy(15, 7); cout << (opcionSeleccionada == 4 ? "==>" : "   ") << "4.Mostrar lista de personajes";
    gotoxy(15, 8); cout << (opcionSeleccionada == 5 ? "==>" : "   ") << "5.Salir";
    gotoxy(15, 10); cout << "===============================";
}




