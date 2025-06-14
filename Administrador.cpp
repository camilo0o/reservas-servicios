#include "Administrador.h"
#include <iostream>
using namespace std;
Administrador::Administrador(Organizacion *org) {
    this->ororganizacion = org;
}
Organizacion *Administrador::getOrganizacion() {
    return this->organizacion;
}
void Administrador::setOrganizacion(Organizacion *org) {
    this->organizacion = org;
}


