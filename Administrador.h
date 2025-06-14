#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include"Organizacion.h"
#include "Usuario.h"
class Administrador :public Usuario{
private:
    Organizacion* organizacion;
public:
    Administrador(Organizacion *org);
    ~Administrador();
    void setOrganizacion(Organizacion *org);
    Organizacion* getOrganizacion();
};
#endif