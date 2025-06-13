#include "Horario.h"

Horario::Horario(DtFecha fecha, DtHorario horario) {
    this->fecha = fecha;
    this->horario = horario;
}

Horario::~Horario() {
    // No se necesita liberar memoria si DtFecha y DtHorario no usan punteros dinámicos.
}

DtFecha Horario::getFecha() {
    return fecha;
}

DtHorario Horario::getHorario() {
    return horario;
}

void Horario::setFecha(DtFecha fecha) {
    this->fecha = fecha;
}

void Horario::setHorario(DtHorario horario) {
    this->horario = horario;
}