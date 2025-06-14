#include "Administrador.h"
#include <iostream>
using namespace std;
Administrador::Administrador(Organizacion *org): Organizacion(org) {}
Organizacion *Administrador::getOrganizacion() const {
    return this->organizacion;
}
void Administrador::setOrganizacion(Organizacion *org) {
    this->organizacion = org;
}


