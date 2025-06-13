#include "Empleado.h"

Empleado::Empleado(string nombre) {
    this->nombre = nombre;
    this->calificacion = 0.0f;
}

Empleado::~Empleado() {
    for (HorarioDia* horario : horarioSemana) {
        delete horario;
    }
    horarioSemana.clear();
}

string Empleado::getNombre() {
    return nombre;
}

vector<HorarioDia*>* Empleado::getHorarioSemana() {
    return &horarioSemana;
}

float Empleado::getCalificacion() {
    return calificacion;
}

void Empleado::setHorarioSemana(HorarioDia* horario) {
    horarioSemana.push_back(horario);
}

void Empleado::setNombre(string nombre) {
    this->nombre = nombre;
}

void Empleado::setCalificacion(float calificacion) {
    this->calificacion = calificacion;
}