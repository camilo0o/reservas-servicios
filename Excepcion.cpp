#include "Excepcion.h"

Excepcion::Excepcion(DtFecha* desde, DtFecha* hasta, string motivo) {
    this->desde = desde;
    this->hasta = hasta;
    this->motivo = motivo;
}

Excepcion::~Excepcion() {
    desde->~DtFecha();
    hasta->~DtFecha();
}

DtFecha* Excepcion::getDesde() {
    return desde;
}

DtFecha* Excepcion::getHasta() {
    return hasta;
}

string* Excepcion::getMotivo() {
    return motivo;
}