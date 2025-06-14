#include "Usuario.h"
Usuario::Usuario() {
    this->contrasenia = " ";
    this->correoElectronico = " ";
    this->id = " ";
    this->nombre = " ";
}
Usuario::Usuario(string id, string nombre, string correoElectronico, string contrasenia) {
    this->id = id;
    this->nombre = nombre;
    this->correoElectronico = correoElectronico;
    this->contrasenia = contrasenia;
}

string Usuario::getNombre() {
    return this->nombre;
}
string Usuario::getCorreoElectronico() {
    return this->correoElectronico;
}
string Usuario::getId() {
    return this->id;
}
string Usuario::getContrasenia() {
    return this->contrasenia;
}

void Usuario::setContrasenia(string contrasenia) {
    this->contrasenia = contrasenia;
}
void Usuario::setCorreoElectronico(string correoElectronico) {
    this->correoElectronico = correoElectronico;
}
void Usuario::setId(string id) {
    this->id = id;
}
void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}




