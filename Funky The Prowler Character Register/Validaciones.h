//Validaciones header file

#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <string>
#include <limits>
#include <cctype>

class Validaciones{
    public:
        //Validar alias, nombre y apellido
        static std::string validarNombre();
        //Validar fecha de nacimiento
        static std::string validarFechaNacimiento();
        //Validar edad
        static short int validarEdad();
        //Validar altura
        static float validarAltura();
        //Validar peso
        static float validarPeso();
};



#endif