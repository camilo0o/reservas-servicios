#ifndef ORGANIZACION_H
#define ORGANIZACION_H
#include <string>
#include <vector>

#include "Sucursal.h"
using namespace std;


class Organizacion {
private:
    int id;
    string nombre;
    string direccion;
    vector<string*> contactos;
    vector<Sucursal*> sucursales;

public:
    Organizacion(int id, string nombre, string direccion);
    ~Organizacion();

    int getId();
    string getNombre();
    string getDireccion();
    vector<string*>* getContactos();

    void setId(int id);
    void setNombre(string nombre);
    void setDireccion(string direccion);
    void setContacto(string contacto);
};



#endif //ORGANIZACION_H
