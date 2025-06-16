#include "Servicio.h"

Servicio::Servicio(string nombre, string descripcion, int duracion, float precio, float calificacion) {
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->duracion = duracion;
    this->precio = precio;
    this->calificacion = calificacion;
}

string Servicio::getNombre() {
    return this->nombre;
}

string Servicio::getDescripcion() {
    return this->descripcion;
}

int Servicio::getDuracion() {
    return this->duracion;
}

float Servicio::getPrecio() {
    return this->precio;
}

float Servicio::getCalificacion() {
    return this->calificacion;
}

void Servicio::setNombre(string nombre) {
    this->nombre = nombre;
}

void Servicio::setDescripcion(string descripcion) {
    this->descripcion = descripcion;
}

void Servicio::setDuracion(int duracion) {
    this->duracion = duracion;
}

void Servicio::setPrecio(float precio) {
    this->precio = precio;
}

void Servicio::setCalificacion(float calificacion) {
    this->calificacion = calificacion;
}

