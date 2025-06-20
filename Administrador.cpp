#include "Administrador.h"
using namespace std;
Administrador::Administrador(Organizacion *org, string id, string nombre, string correo, string contrasenia):Usuario(id, nombre, correo, contrasenia){
    this->organizacion = org;
}
Organizacion *Administrador::getOrganizacion() const {
    return this->organizacion;
}
void Administrador::setOrganizacion(Organizacion *org) {
    this->organizacion = org;
}


