#ifndef SERVICIO_H
#define SERVICIO_H
#include <string>


class Servicio {
private:
    string nombre, descripcion;
    int duracion;
    float precio, calificacion;
public:
    Servicio(string nombre, string descripcion, int duracion, float precio, float calificacion);
    ~Servicio();

    string getNombre();
    string getDescripcion();
    int getDuracion();
    float getPrecio();
    float getCalificacion();

    void setNombre(string nombre);
    void setDescripcion(string descripcion);
    void setDuracion(int duracion);
    void setPrecio(float precio);
    void setCalificacion(float calificacion);
};



#endif //SERVICIO_H
