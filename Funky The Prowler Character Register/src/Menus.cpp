//Source file for Menus.cpp

#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Menus.h"
#include <iostream>
#include <windows.h>

//Función para mover el cursor a una posición específica
void Menus::gotoxy(int x, int y) {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);
}

//Función para leer la opción de las flechas