#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include"Organizacion.h"
#include "Usuario.h"
#include <string>
class Administrador :public Usuario{
private:
    Organizacion* organizacion;
public:
    Administrador(Organizacion *org, string id, string nombre, string correo, string contrasenia);
    ~Administrador();
    void setOrganizacion(Organizacion *org);
    Organizacion* getOrganizacion() const;
};
#endif