#include "Reserva.h"

Reserva::Reserva(DtFecha *fecha, Sucursal* sucursal, Empleado* empleado, Servicio* servicio ) {
    this->fecha = fecha;
    this->estado = Estado::activa;
    this->sucursal = sucursal;
    this->empleado = empleado;
    this->servicio = servicio;
    this->puntuacion = 0;
    this->fechaCancelacion = nullptr;
    this->comentario = "";
}

DtFecha* Reserva::getFecha() {
    return this->fecha;
}

DtFecha* Reserva::getFechaCancelacion() {
    return this->fechaCancelacion;
}

Estado Reserva::getEstado() {
    return this->estado;
}

Sucursal* Reserva::getSucursal() {
    return this->sucursal;
}

Empleado* Reserva::getEmpleado() {
    return this->empleado;
}

Servicio* Reserva::getServicio() {
    return this->servicio;
}

string Reserva::getComentario() {
    return this->comentario;
}

int Reserva::getPuntuacion() {
    return this->puntuacion;
}

void Reserva::setFecha(DtFecha* fecha) {
    this->fecha = fecha;
}

void Reserva::setFechaCancelacion(DtFecha* fecha) {
    this->fechaCancelacion = fecha;
}

void Reserva::setEstado(Estado estado) {
    this->estado = estado;
}

void Reserva::setSucursal(Sucursal* sucursal) {
    this->sucursal = sucursal;
}

void Reserva::setEmpleado(Empleado* empleado) {
    this->empleado = empleado;
}

void Reserva::setServicio(Servicio* servicio) {
    this->servicio = servicio;
}

void Reserva::setPuntuacion(int puntuacion) {
    this->puntuacion = puntuacion;
}

void Reserva::setComentario(string comentario) {
    this->comentario = comentario;
}


