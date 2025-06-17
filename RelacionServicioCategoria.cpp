#include "RelacionServicioCategoria.h"
RelacionServicioCategoria::RelacionServicioCategoria(Servicio *serv, Categoria *cat) {
    this->servicio = serv;
    this->categoria = cat;
}



Servicio RelacionServicioCategoria::getServicio() {
    return *this->servicio;
}
Categoria RelacionServicioCategoria::getCategoria() {
    return *this->categoria;
}



void RelacionServicioCategoria::setServicio(Servicio *serv) {
    this->servicio = serv;
}
void RelacionServicioCategoria::setCategoria(Categoria *cat) {
    this->categoria = cat;
}

