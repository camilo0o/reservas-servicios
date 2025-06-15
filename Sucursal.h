#ifndef SUCURSAL_H
#define SUCURSAL_H
#include<string>
#include<iostream>
using namespace std;
class Sucursal {
private:
    string nombre;
    string direccion;
public:
    Sucursal(string nombre, string direccion);
    ~Sucursal();
    string getNombre();
    string getDireccion();
    void setNombre(string nombre);
    void setDireccion(string direccion);
};

#endif
