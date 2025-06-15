#ifndef CLIENTE_H
#define CLIENTE_H
#include <vector>
#include "Usuario.h"
#include "Reserva.h"
class Cliente:public Usuario{
private:
    vector<string*> contactos;
    vector<Reserva*> reservas;

public:
    Cliente();
    Cliente(vector<string*> contactos);

    vector<string*> getContactos();
    vector<string*> setContactos(vector<string*> contactos);
    vector<Reserva*> getReserva();
    vector<Reserva*> setReserva(vector<Reserva*> reservas);

};

#endif