#include "RelacionEmpleadoServicio.h"
RelacionEmpleadoServicio::RelacionEmpleadoServicio(Empleado *emp, Servicio *serv) {
    this->empleado = emp;
    this->servicio = serv;
}
Empleado RelacionEmpleadoServicio::getEmpleado() {
    return *this->empleado;
}
Servicio RelacionEmpleadoServicio::getServicio() {
    return *this->servicio;
}
void RelacionEmpleadoServicio::setEmpleado(Empleado *emp) {
    this->empleado = emp;
}
void RelacionEmpleadoServicio::setServicio(Servicio *serv) {
    this->servicio = serv;
}
