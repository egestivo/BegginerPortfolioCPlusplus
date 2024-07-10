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
    
    bool valido = false;
    if(opcionAlias == 1) {
        do {
            std::cout << "\nIngrese Alias: ";
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
            std::cout << "\nIngrese Nombre: ";
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
        std::cout << std::endl ;
        edad = valid.leerEdad();
        if(valid.validarEdad(edad)) {
            valido = true;
            setEdad(edad);
        }
    } while (!valido);

    setGenero(menus.leerOpcionSexo());

    valido = false;
    do {
        std::cout << std::endl;
        altura = valid.leerAltura();
        if(valid.validarAltura(altura)) {
            valido = true;
            setAltura(altura);
        }
    } while (!valido);

    valido = false;
    do {
        std::cout << std::endl;
        peso = valid.leerPeso();
        if(valid.validarPeso(peso)) {
            valido = true;
            setPeso(peso);
        }
    } while (!valido);
}

//Función que muestra los personajes ingresados
void Personaje::mostrarPersonaje() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Alias: " << alias << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellido: " << apellido << std::endl;
    std::cout << "Fecha de Nacimiento: " << fechaNacimiento << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Altura: " << altura << std::endl;
    std::cout << "Peso: " << peso << std::endl;
}

int main(){
    Personaje personaje;
    personaje.ingresarPersonaje();
    personaje.mostrarPersonaje();
    return 0;

}




