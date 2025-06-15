#include "Empleado.h"

Empleado::Empleado(string nombre) {
    this->nombre = nombre;
    this->calificacion = 0.0f;
}

Empleado::~Empleado() {
    for (Horario* h : horarios) {
        delete h;
    }
    horarios.clear();
    for (Excepcion* e : excepciones) {
        delete e;
    }
    excepciones.clear();
}

string Empleado::getNombre() {
    return nombre;
}

vector<DtHorarioDia*>* Empleado::getHorarioSemana() {
    return &horarioSemana;
}

float Empleado::getCalificacion() {
    return calificacion;
}

vector<Horario*>* Empleado::getHorarios() {
    return &horarios;
}

vector<Excepcion*>* Empleado::getExcepciones() {
    return &excepciones;
}

void Empleado::setHorarioSemana(DtHorarioDia* horario) {
    horarioSemana.push_back(horario);
}

void Empleado::setNombre(string nombre) {
    this->nombre = nombre;
}

void Empleado::setCalificacion(float calificacion) {
    this->calificacion = calificacion;
}

void Empleado::setHorario(Horario* horario) {
    horarios.push_back(horario);
}

void Empleado::setExcepcion(Excepcion* excepcion){
    excepciones.push_back(excepcion);
}