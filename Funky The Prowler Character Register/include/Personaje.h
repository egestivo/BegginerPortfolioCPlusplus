//Header para Personaje

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>

enum sexo{masculino, femenino};

class Personaje {
    private:
        short int id;
        std::string alias, nombre, apellido, fechaNacimiento;
        sexo genero;
        short int edad;
        float altura, peso;
    public:
        //Constructor por defecto
        Personaje(): id(0), alias("None"), nombre("None"), apellido("None"), fechaNacimiento("00-00-0000"), edad(0), genero(masculino), altura(0), peso(0) {};
        //Constructor con parametros
        Personaje(short int id, std::string alias, std::string nombre, std::string apellido, std::string fechaNacimiento, short int edad, sexo genero, float altura, float peso): id(id), alias(alias), nombre(nombre), apellido(apellido), edad(edad), genero(genero), altura(altura), peso(peso) {};

        //Getters y setters
        short int getId();

        std::string getAlias();

        std::string getNombre();
        
        std::string getApellido();

        std::string getFechaNacimiento();

        sexo getGenero();

        short int getEdad();

        float getAltura();

        float getPeso();

        void setAlias(std::string alias);

        void setNombre(std::string nombre);

        void setApellido(std::string apellido);

        void setFechaNacimiento(std::string fechaNacimiento);

        void setGenero(sexo genero);

        void autoIdPersonaje();
        sexo seleccionarSexo();
        void ingresarPersonaje();
        void mostrarPersonaje();
        
};


#endif
