#ifndef CATEGORIA_H
#define CATEGORIA_H
#include <string>


class Categoria {
private:
    string nombre;
public:
    Categoria(string nombre);
    ~Categoria();

    string getNombre();

    void setNombre(string nombre);
};



#endif //CATEGORIA_H
