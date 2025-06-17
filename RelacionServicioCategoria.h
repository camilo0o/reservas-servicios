#ifndef RELACIONSERVICIOCATEGORIA_H
#define RELACIONSERVICIOCATEGORIA_H
#include"Servicio.h"
#include"Categoria.h"

class RelacionServicioCategoria {
private:
    Servicio *servicio;
    Categoria *categoria;
public:
    RelacionServicioCategoria(Servicio *serv, Categoria *cat);
    ~RelacionServicioCategoria();

    Servicio getServicio();
    Categoria getCategoria();

    void setCategoria(Categoria *cat);
    void setServicio(Servicio *serv);
};


#endif