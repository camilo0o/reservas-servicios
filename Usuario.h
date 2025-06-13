#ifndef USUARIO_H
#define USUARIO_H
#include<string>
#include<iostream>
using namespace std;


class Usuario {
private:
    string nombre;
    string correoElectronico;
    string id:
    string contrasenia;
public:
    Usuario();
    Usuario(string id, string nombre, string correoElectronico, string contrasenia);

    string getNombre();
    string getCorreoElectronico();
    string getContrasenia();
    string getId();

    void setNombre(string nombre);
    void setCorreoElectronico(string correoElectronico);
    void setContrasenia(string contrasenia);
    void setId(string id);
};



#endif //USUARIO_H
