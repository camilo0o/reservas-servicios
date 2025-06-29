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

vector<Empleado*>* getEmpleados() {
    return &empleados;
}

vector<Sucursal*>* getSucursales(){
    return &sucursales;
}

vector<Servicio*>* getServicios(){
    return &servicios;
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

void Organizacion::setEmpleado(Empleado* empleado){
    this->empleado.push_back(empleado);
}

void Organizacion::setSucursal(Sucursal* sucursal){
    this->sucursal.push_back(sucursal);
}

void Organizacion::setServicio(Servicio* servicio){
    this->servicio.push_back(servicio);
}