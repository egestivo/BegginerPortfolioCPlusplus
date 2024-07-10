//Validaciones header file

#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <string>
#include <limits>
#include <cctype>

class Validaciones{
    public:

        // Validar nombre y apellido (sin caracteres especiales, solo letras)
        static bool validarNombre(const std::string& nombre);

        static std::string formatearNombre(const std::string& nombre);

        // Leer entrada sin n�meros ni espacios (para nombre y apellido)
        static std::string leerNombre();

        //Validar fecha de nacimiento
        static bool validarFechaNacimiento(const std::string& fecha);

        //Leer entrada con un formato de fecha DD-MM-AAAA
        static std::string leerFechaNacimiento();

        //Validar edad
        static bool validarEdad(const short int& edad);

        //Leer entrada de edad hasta máximo 3 digitos
        static short int leerEdad();

        //Validar altura
        static bool validarAltura(const float& altura);

        //Leer entrada de la altura
        static float leerAltura();

        //Validar peso
        static bool validarPeso(const float& peso);

        //Leer entrada de peso
        static float leerPeso();
        
    private:
};



#endif