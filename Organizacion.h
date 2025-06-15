#ifndef ORGANIZACION_H
#define ORGANIZACION_H
#include <string>
#include <vector>
#include "Empleado.h"
#include "Sucursal.h"
#include "Servicio.h"
using namespace std;


class Organizacion {
private:
    int id;
    string nombre;
    string direccion;
    vector<string*> contactos;
    vector<Empleado*> empleados;
    vector<Sucursal*> sucursales;
    vector<Servicio*> servicios;

public:
    Organizacion(int id, string nombre, string direccion);
    ~Organizacion();

    int getId();
    string getNombre();
    string getDireccion();
    vector<string*>* getContactos();
    vector<Empleado*>* getEmpleados();
    vector<Sucursal*>* getSucursales();
    vector<Servicio*>* getServicios();


    void setId(int id);
    void setNombre(string nombre);
    void setDireccion(string direccion);
    void setContacto(string contacto);
    void setEmpleado(Empleado* empleado);
    void setSucursal(Sucursal* sucursal);
    void setServicio(Servicio* servicio);
};



#endif //ORGANIZACION_H
