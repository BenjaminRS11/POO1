#include <iostream>
#include "Libro.h"

Libro::Libro(string titulo, string autor, int numEjemplaresDisponibles, int numTotalEjemplares) {
    this->titulo = titulo;
    this->autor = autor;
    this->numEjemplaresDisponibles = numEjemplaresDisponibles;
    this->numTotalEjemplares = numTotalEjemplares;
}

void Libro::mostrarInfo() {
    cout<<"Título: "<<titulo<<"\n"<<endl;
    cout<<"Autor: "<<autor<<"\n"<<endl; 
    cout<<"Ejemplares Disponibles: "<<numEjemplaresDisponibles<<"\n"<<endl;
    cout<<"Ejemplares Totales: "<<numTotalEjemplares<<"\n"<<endl;
}