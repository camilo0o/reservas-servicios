#include "Cliente.h"
#include <iostream>
using namespace std;
Cliente::Cliente() {
    this->contactos = {};
}
Cliente::Cliente(vector<string *> contactos) {
    this->contactos = contactos;
}
vector<string *> Cliente::getContactos() {
    return this->contactos;
}

vector<string *> Cliente::setContactos(vector<string *> contactos) {
    this->contactos = contactos;
}
vector<Reserva*> Cliente::getReserva() {
    return this->reservas;
}
vector<Reserva *> Cliente::setReserva(vector<Reserva *> reservas) {
    this->reservas = reservas;
}

