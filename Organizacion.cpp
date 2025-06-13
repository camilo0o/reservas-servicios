#include "Organizacion.h"

Organizacion::Organizacion(int id, string nombre, string direccion) {
    this->id = id;
    this->nombre = nombre;
    this->direccion = direccion;
}

Organizacion::~Organizacion() {
    for (string* contacto : contactos) {
        delete contacto;
    }
    contactos.clear();
}

int Organizacion::getId() {
    return id;
}

string Organizacion::getNombre() {
    return nombre;
}

string Organizacion::getDireccion() {
    return direccion;
}

vector<string*>* Organizacion::getContactos() {
    return &contactos;
}

void Organizacion::setId(int id) {
    this->id = id;
}

void Organizacion::setNombre(string nombre) {
    this->nombre = nombre;
}

void Organizacion::setDireccion(string direccion) {
    this->direccion = direccion;
}

void Organizacion::setContacto(string contacto) {
    contactos.push_back(new string(contacto));
}