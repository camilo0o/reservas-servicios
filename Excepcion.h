#ifndef EXCEPCION_H
#define EXCEPCION_H
#include <DtFecha.h>
#include <string>
using namespace std;

class Excepcion {
private:
    DtFecha* desde;
    DtFecha* hasta;
    string motivo;
public:
    Excepcion(DtFecha* desde, DtFecha* hasta, string motivo);
    ~Excepcion();
    DtFecha* getDesde();
    DtFecha* getHasta();
    string getMotivo();
};



#endif //EXCEPCION_H
