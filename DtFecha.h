#ifndef DTFECHA_H
#define DTFECHA_H



class DtFecha {
private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;

public:
    DtFecha(int dia, int mes, int anio, int hora, int minuto) {
        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
        this->hora = hora;
        this->minuto = minuto;
    };
    ~DtFecha();
    int getDia(){
        return this->dia;
    };
    int getMes(){
        return this->mes;
    };
    int getAnio(){
        return this->anio;
    };
    int getHora(){
        return this->hora;
    };
    int getMinuto(){
        return this->minuto;
    };
};



#endif //DTFECHA_H
