//Source file for Personaje

#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Personaje.h"
#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Menus.h"
#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Validaciones.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

//Variables globales de menus y validaciones
Menus menus;
Validaciones valid;
//Constructor por defecto
Personaje::Personaje(): id(0), alias("None"), nombre("None"), apellido("None"), fechaNacimiento("00-00-0000"), edad(0), genero(masculino), altura(0), peso(0) {};

//Constructor con parametros
Personaje::Personaje(short int id, std::string alias, std::string nombre, std::string apellido, std::string fechaNacimiento, short int edad, sexo genero, float altura, float peso): id(id), alias(alias), nombre(nombre), apellido(apellido), edad(edad), genero(genero), altura(altura), peso(peso) {};

//Getters y setters
short int Personaje::getId() {
    return id;
}

std::string Personaje::getAlias() {
    return alias;
}

std::string Personaje::getNombre() {
    return nombre;
}

std::string Personaje::getApellido() {
    return apellido;
}

std::string Personaje::getFechaNacimiento() {
    return fechaNacimiento;
}

sexo Personaje::getGenero() {
    return genero;
}

short int Personaje::getEdad() {
    return edad;
}

float Personaje::getAltura() {
    return altura;
}

float Personaje::getPeso() {
    return peso;
}

void Personaje::setId(const short int& id) {
    this->id = id;
}

void Personaje::setAlias(const std::string& alias) {
    this->alias = alias;
}

void Personaje::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Personaje::setApellido(const std::string& apellido) {
    this->apellido = apellido;
}

void Personaje::setFechaNacimiento(const std::string& fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

void Personaje::setGenero(const sexo& genero) {
    this->genero = genero;
}

void Personaje::setEdad(const short int& edad) {
    this->edad = edad;
}

void Personaje::setAltura(const float& altura) {
    this->altura = altura;
}

void Personaje::setPeso(const float& peso) {
    this->peso = peso;
}

void Personaje::autoIdPersonaje() {
    srand(time(0));
    id = 1 + rand() % (1000 + 1);
}

void Personaje::ingresarPersonaje() {
    Personaje* character;
    int opcionAlias, opcionSexo, opcionBuscar;
    std::cout << "Ingresando personaje nuevo..." << std::endl;
    autoIdPersonaje();
    std::cout << "ID: " << id << std::endl;
    
    opcionAlias = menus.leerOpcionAlias();
    menus.menuAlias(opcionAlias);
    bool valido = false;
    if(opcionAlias == 1) {
        do {
            std::cout << "Ingrese Alias: ";
            nombre = valid.leerNombre();
            if (valid.validarNombre(nombre)) {
                valido = true;
                setAlias(nombre);
                setNombre("Unknown");
                setApellido("Unknown");
            }
            else {
                std::cout << "Alias no valido. Intente nuevamente." << std::endl;
            }
        } while (!valido);
    } else {
        do {
            std::cout << "Ingrese Nombre: ";
            nombre = valid.leerNombre();
            if (valid.validarNombre(nombre)) {
                valido = true;
                setAlias("Unknown");
                setNombre(nombre);
            }
            else {
                std::cout << "Alias no valido. Intente nuevamente." << std::endl;
            }
        } while (!valido);
        valido = false;
        do {
            std::cout << "Ingrese Apellido: ";
            apellido = valid.leerNombre();
            if (valid.validarNombre(apellido)) {
                valido = true;
                setApellido(apellido);
            }
            else {
                std::cout << "Apellido no valido. Intente nuevamente." << std::endl;
            }
        } while (!valido);
    }

    valido = false;
    do{
        std::cout << "Ingrese Fecha de Nacimiento (DD-MM-AAAA): ";
        fechaNacimiento = valid.leerFechaNacimiento();
        if(valid.validarFechaNacimiento(fechaNacimiento)) {
            valido = true;
            setFechaNacimiento(fechaNacimiento);
        } else {
            std::cout << "Fecha no valida. Intente nuevamente." << std::endl;
        }
    } while (!valido);

    valido = false;
    do {
        std::cout << "Ingrese Edad: ";
        edad = valid.leerEdad();
        if(valid.validarEdad(edad)) {
            valido = true;
            setEdad(edad);
        }
    } while (!valido);

    opcionSexo = menus.leerOpcionSexo();
    menus.menuSexo(opcionSexo);
    setGenero(menus.leerOpcionSexo());

    valido = false;
    do {
        std::cout << "Ingrese Altura (en metros): ";
        altura = valid.leerAltura();
        if(valid.validarAltura(altura)) {
            valido = true;
            setAltura(altura);
        }
    } while (!valido);

    valido = false;
    do {
        std::cout << "Ingrese Peso (en kilogramos): ";
        peso = valid.leerPeso();
        if(valid.validarPeso(peso)) {
            valido = true;
            setPeso(peso);
        }
    } while (!valido);

    Personaje* personaje = new Personaje(id, alias, nombre, apellido, fechaNacimiento, edad, genero, altura, peso);
    
}




