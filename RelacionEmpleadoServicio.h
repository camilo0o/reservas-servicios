#ifndef RELACIONEMPLEADOSERVICIO_H
#define RELACIONEMPLEADOSERVICIO_H
#include "Empleado.h"
#include "Servicio.h"
#include <string>
#include <iostream>
using namespace std;
class RelacionEmpleadoServicio {
private:
    Empleado *empleado;
    Servicio *servicio;
public:
    RelacionEmpleadoServicio(Empleado *emp, Servicio *serv);
    ~RelacionEmpleadoServicio();

    Empleado getEmpleado();
    Servicio getServicio();

    void setEmpleado(Empleado *emp);
    void setServicio(Servicio *serv);
};
#endif
