//Source file for Personaje

#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Personaje.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

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

void Personaje::setAlias(std::string alias) {
    this->alias = alias;
}

void Personaje::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Personaje::setApellido(std::string apellido) {
    this->apellido = apellido;
}

void Personaje::setFechaNacimiento(std::string fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

void Personaje::setGenero(sexo genero) {
    this->genero = genero;
}

void Personaje::ingresarPersonaje() {
    std::cout << "Ingrese el alias del personaje: ";
    std::cin >> alias;
    std::cout << "Ingrese el nombre del personaje: ";
    std::cin >> nombre;
    std::cout << "Ingrese el apellido del personaje: ";
    std::cin >> apellido;
    std::cout << "Ingrese la fecha de nacimiento del personaje: ";
    std::cin >> fechaNacimiento;
    std::cout << "Ingrese la edad del personaje: ";
    std::cin >> edad;
    std::cout << "Ingrese la altura del personaje: ";
    std::cin >> altura;
    std::cout << "Ingrese el peso del personaje: ";
    std::cin >> peso;
    genero = seleccionarSexo();
    autoIdPersonaje();
}

void Personaje::autoIdPersonaje() {
    srand(time(0));
    id = rand() % 1000 + 1;
}