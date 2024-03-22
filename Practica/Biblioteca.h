#include "Libro.h"
#include <vector>

using namespace std;

class Biblioteca {
private:
    vector<Libro> coleccionLibros;

public:
    Biblioteca();
    void agregarLibro(Libro libro);
    void eliminarLibro(string titulo);
    void mostrarLibrosDisponibles();
    void realizarPrestamo(string titulo);
    void realizarDevolucion(string titulo);
};