#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include <vector>
#include "HorarioDia.h"
using namespace std;


class Empleado {
private:
    string nombre;
    vector<HorarioDia*> horarioSemana;
    float calificacion;

public:
    Empleado(string nombre);
    ~Empleado();

    string getNombre();
    vector<HorarioDia*>* getHorarioSemana();
    float getCalificacion();
    void setHorarioSemana(HorarioDia*);
    void setNombre(string nombre);
    void setCalificacion(float calificacion);
};



#endif //EMPLEADO_H
