#ifndef DTHORARIODIA_H
#define DTHORARIODIA_H
#include "DtFecha.h"


class DtHorarioDia {
private:
    DtFecha* horaInicio;
    DtFecha* horaFinal;
public:
    DtHorarioDia(DtFecha* horaInicio, DtFecha* horaFinal){
        this->horaInicio = horaInicio;
        this->horaFinal = horaFinal;
    };
    ~DtHorarioDia();
    DtFecha* getHoraInicio(){
        return horaInicio;
    };
    DtFecha* getHoraFinal(){
        return horaFinal;
    };
};



#endif //DTHORARIODIA_H
