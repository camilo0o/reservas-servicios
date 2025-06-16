#include "Reserva.h"

Reserva::Reserva(DtFecha *fecha, bool cancelar, Estado estado, Sucursal* sucursal, Empleado* empleado, Servicio* servicio) {
    this->fecha = fecha;
    this->cancelar = cancelar;
    this->estado = estado;
    this->sucursal = sucursal;
    this->empleado = empleado;
    this->servicio = servicio;
}

DtFecha* Reserva::getFecha() {
    return this->fecha;
}

bool Reserva::getCancelar() {
    return this->cancelar;
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

void Reserva::setFecha(DtFecha* fecha) {
    this->fecha = fecha;
}

void Reserva::setCancelar(bool cancelar) {
    this->cancelar = cancelar;
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


