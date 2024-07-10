//Source de Validaciones para las entradas de texto

#include "C:\Users\Estivo\Desktop\Proyectos\Funky The Prowler Character Register\include\Validaciones.h"
#include <iostream>
#include <regex>
#include <limits>
#include <conio.h>

// Validar nombre y apellido (sin caracteres especiales, solo letras y espacios)
bool Validaciones::validarNombre(const std::string& nombre) {
    const std::regex pattern(R"([A-Za-z\s]+)");
    return std::regex_match(nombre, pattern);
}

// Formatear el nombre a tener la primera letra de cada palabra en mayúscula y el resto en minúscula
std::string Validaciones::formatearNombre(const std::string& nombre) {
    std::string formateado;
    bool nuevaPalabra = true;

    for (char ch : nombre) {
        if (nuevaPalabra && isalpha(ch)) {
            formateado += toupper(ch);
            nuevaPalabra = false;
        } else {
            formateado += tolower(ch);
        }
        if (ch == ' ') {
            nuevaPalabra = true;
        }
    }
    
    return formateado;
}

// Leer entrada de texto para nombres y apellidos
std::string Validaciones::leerNombre() {
    std::string entrada;
    char ch;
    while (true) {
        ch = _getch();
        if (ch == '\r') { // Enter key
            if (!entrada.empty()) {
                break; // Solo permite enviar si hay algo en la entrada
            }
        }
        else if (isalpha(ch) || ch == ' ') { // Permitir solo letras y espacios
            entrada += ch;
            std::cout << ch;
        }
        else if (ch == '\b' && !entrada.empty()) { // Manejo de la tecla de retroceso
            entrada.pop_back();
            std::cout << "\b \b";
        }
    }
    std::cout << std::endl;
    return formatearNombre(entrada);
}

//Validar fecha de nacimiento
bool Validaciones::validarFechaNacimiento(const std::string& fecha) {
    const std::regex pattern(R"([0-9]{2}-[0-9]{2}-[0-9]{4})");
    return std::regex_match(fecha, pattern);
}

//Leer entrada con un formato de fecha DD-MM-AAAA
std::string Validaciones::leerFechaNacimiento() {
    std::string entrada;
    char ch;
    while (true) {
        ch = _getch();
        if (ch == '\r') {
            if (!entrada.empty()) {
                break;  // Solo permite enviar si hay algo en la entrada
            }
        }
        else if (isdigit(ch) || ch == '-') {
            entrada += ch;
            std::cout << ch;
        }
        else if (ch == '\b' && !entrada.empty()) {
            entrada.pop_back();
            std::cout << "\b \b";
        }
    }
    std::cout << std::endl;
    return entrada;
}

//Validar edad
bool Validaciones::validarEdad(const short int& edad) {
    return edad > 0 && edad < 150;
}

// Leer entrada de edad hasta máximo 3 dígitos
short int Validaciones::leerEdad() {
    std::string input;
    char ch;
    std::cout << "Ingrese la edad: ";
    while (true) {
        ch = _getch();
        if (ch >= '0' && ch <= '9') {
            if (input.size() < 3) {
                input.push_back(ch);
                std::cout << ch;
            }
        } else if (ch == '\b' && !input.empty()) {
            input.pop_back();
            std::cout << "\b \b";
        } else if (ch == '\r') {
            if (!input.empty()) {
                break;
            }
        }
    }
    std::cout << std::endl;
    short int edad = std::stoi(input);
    if (validarEdad(edad)) {
        return edad;
    } else {
        std::cout << "Edad inválida. Ingrese nuevamente: ";
        return leerEdad();
    }
}

// Validar altura
bool Validaciones::validarAltura(const float& altura) {
    return altura > 0.0f && altura <= 3.0f;
}

// Leer entrada de altura
float Validaciones::leerAltura() {
    std::string input;
    char ch;
    std::cout << "Ingrese la altura (ej. 1.65): ";
    while (true) {
        ch = _getch();
        if ((ch >= '0' && ch <= '9') || ch == '.') {
            input.push_back(ch);
            std::cout << ch;
        } else if (ch == '\b' && !input.empty()) {
            input.pop_back();
            std::cout << "\b \b";
        } else if (ch == '\r') {
            if (!input.empty() && std::count(input.begin(), input.end(), '.') <= 1) {
                break;
            }
        }
    }
    std::cout << std::endl;
    float altura = std::stof(input);
    if (validarAltura(altura)) {
        return altura;
    } else {
        std::cout << "Altura inválida. Ingrese nuevamente: ";
        return leerAltura();
    }
}

// Validar peso
bool Validaciones::validarPeso(const float& peso) {
    return peso > 0.0f && peso <= 300.0f;
}

// Leer entrada de peso
float Validaciones::leerPeso() {
    std::string input;
    char ch;
    std::cout << "Ingrese el peso (ej. 65.5): ";
    while (true) {
        ch = _getch();
        if ((ch >= '0' && ch <= '9') || ch == '.') {
            input.push_back(ch);
            std::cout << ch;
        } else if (ch == '\b' && !input.empty()) {
            input.pop_back();
            std::cout << "\b \b";
        } else if (ch == '\r') {
            if (!input.empty() && std::count(input.begin(), input.end(), '.') <= 1) {
                break;
            }
        }
    }
    std::cout << std::endl;
    float peso = std::stof(input);
    if (validarPeso(peso)) {
        return peso;
    } else {
        std::cout << "Peso inválido. Ingrese nuevamente: ";
        return leerPeso();
    }
}

