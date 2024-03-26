#include "Concierto.h"

Concierto::Concierto(string tipo, string ubicacion, string tema, int duracion, string generoMusical, string artista) 
    : Evento(tipo, ubicacion, tema, duracion), generoMusical(generoMusical), artista(artista) {
    this-> tipo = tipo;
    this-> ubicacion = ubicacion;
    this-> tema = tema;
    this-> duracion = duracion;
}

string Evento::getTipo() {
    return this-> tipo;
}
string Evento::getUbicacion() {
    return this-> ubicacion;
}
string Evento::getTema() {
    return this-> tema;
}
int Evento::getDuracion() {
    return this-> duracion;
}
