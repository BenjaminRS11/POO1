#include "Biblioteca.h"
#include <iostream>

Biblioteca::Biblioteca() {
    // Constructor de la clase Biblioteca, si es necesario
}

void Biblioteca::agregarLibro(Libro libro) {
    if (coleccionLibros.size() < 20) {
        coleccionLibros.push_back(libro);
        cout << "Libro agregado exitosamente." << endl;
    } else {
        cout << "La biblioteca ha alcanzado su capacidad máxima de libros." << endl;
    }
}

void Biblioteca::eliminarLibro(string titulo) {
    // Implementación para eliminar un libro de la colección
}

void Biblioteca::mostrarLibrosDisponibles() {
    // Implementación para mostrar la lista de libros disponibles
}

void Biblioteca::realizarPrestamo(string titulo) {
    // Implementación para realizar un préstamo de un libro
}

void Biblioteca::realizarDevolucion(string titulo) {
    // Implementación para realizar la devolución de un libro prestado
}