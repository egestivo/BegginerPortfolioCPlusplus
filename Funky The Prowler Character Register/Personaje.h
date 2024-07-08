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
        short int getId(){return id;};
        void setId(short int id){this->id = id;};

        std::string getAlias(){return alias;};
        void setAlias(std::string alias){this->alias = alias;};

        std::string getNombre(){return nombre;};
        void setNombre(std::string nombre){this->nombre = nombre;};
        
        std::string getApellido(){return apellido;};
        void setApellido(std::string apellido){this->apellido = apellido;};

        std::string getFechaNacimiento(){return fechaNacimiento;};
        void setFechaNacimiento(std::string fechaNacimiento){this->fechaNacimiento = fechaNacimiento;};

        sexo getGenero(){return genero;};
        void setGenero(sexo genero){this->genero = genero;};

        short int getEdad(){return edad;};
        void setEdad(short int edad){this->edad = edad;};

        float getAltura(){return altura;};
        void setAltura(float altura){this->altura = altura;};

        float getPeso(){return peso;};
        void setPeso(float peso){this->peso = peso;};


        void autoIdPersonaje();
        sexo seleccionarSexo();
        void ingresarPersonaje();
        void mostrarPersonaje();
        
};


#endif
