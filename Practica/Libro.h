#include <iostream>

using namespace std;

class Libro {
    private:
    string titulo;
    string autor;
    int numEjemplaresDisponibles;
    int numTotalEjemplares;
    public:
    Libro(string, string, int, int);
    void iniciarAtributos();
    void mostrarInfo();
    void actualizarNumEjemplaresDisponibles();
    bool verificarDisponibilidadPrestamo();
};