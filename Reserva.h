#ifndef RESERVA_H
#define RESERVA_H
#include "DtFecha.h"
#include "Enums.h"
#include "Sucursal.h"
#include "Empleado.h"
#include "Servicio.h"

class Reserva {
private:
    DtFecha* fecha;
    bool cancelar;
    Estado estado;
    int puntuacion;
    string comentario;
    Sucursal* sucursal;
    Empleado* empleado;
    Servicio* servicio;


public:
    Reserva(DtFecha* fecha, bool cancelar, Estado estado, Sucursal* sucursal, Empleado* empleado, Servicio* servicio, int puntuacion, string comentario);
    ~Reserva();

    DtFecha* getFecha();
    bool getCancelar();
    Estado getEstado();
    string getComentario();
    int getPuntuacion();
    Sucursal* getSucursal();
    Empleado* getEmpleado();
    Servicio* getServicio();

    void setPuntuacion(int puntuacion);
    void setComentario(string comentario);
    void setFecha(DtFecha* fecha);
    void setCancelar(bool cancelar);
    void setEstado(Estado estado);
    void setSucursal(Sucursal* sucursal);
    void setEmpleado(Empleado* empleado);
    void setServicio(Servicio* servicio);

};
#define