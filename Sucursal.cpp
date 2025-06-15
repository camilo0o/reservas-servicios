#include "Sucursal.h"
Sucursal::Sucursal(string nombre, string direccion) {
    this->nombre = nombre;
    this->direccion = direccion;
}
string Sucursal::getDireccion() {
    return this->direccion;
}
string Sucursal::getNombre() {
    return this->direccion;
}
void Sucursal::setDireccion(string direccion) {
    this->direccion = direccion;
}
void Sucursal::setNombre(string nombre) {
    this->nombre = nombre;
}
Sucursal::~Sucursal() {
    //TODO: hacer destructor
}




