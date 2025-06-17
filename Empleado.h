#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include <vector>
#include "Horario.h"
#include "Excepcion.h"
using namespace std;


class Empleado {
private:
    string nombre;
    float calificacion;
    vector<Horario*> horarios;
    vector<Excepcion*> excepciones;

public:
    Empleado(string nombre);
    ~Empleado();

    string getNombre();
    float getCalificacion();
    vector<Horario*>* getHorarios();
    vector<Excepcion*>* getExcepciones();

    void setNombre(string nombre);
    void setCalificacion(float calificacion);
    void setHorario(Horario* horario);
    void setExcepcion(Excepcion* excepcion);
};



#endif //EMPLEADO_H
