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
    Cliente(vector<string*> contactos, string id, string nombre, string correo, string contrasenia);

    vector<string*> getContactos();
    vector<string*> setContactos(vector<string*> contactos);
    vector<Reserva*> getReserva();
    vector<Reserva*> setReserva(vector<Reserva*> reservas);

};

#endif