#ifndef HORARIO_H
#define HORARIO_H
#include "DtFecha.h"
#include "DtFecha.h"
using namespace std;


class Horario {
private:
    DtFecha fecha;
    DtHorario horario;
public:
    Horario(DtFecha, DtHorario);
    ~Horario();

    DtFecha getFecha();
    DtHorario getHorario();

    void setFecha(DtFecha);
    void setHorario(DtHorario);
};



#endif //HORARIO_H
