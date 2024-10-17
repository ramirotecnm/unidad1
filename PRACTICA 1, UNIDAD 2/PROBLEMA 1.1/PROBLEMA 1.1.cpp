#include <iostream>

using namespace std;

int main() {
    // Problema 1.1
    // Construye un programa que, dado el costo de un artículo vendido y la cantidad
    // de dinero entregada por el cliente, calcule e imprima el cambio que debe entregar.

    // Declaración de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;

    // Entrada de datos
    cout << "Escribe el costo del artículo: " << "\n";
    cin >> PRECIOPRODUCTO;

    cout << "Escribe cuánto fue el pago del cliente: " << "\n";
    cin >> PAGO;

    // Cálculo de devolución
    DEVOLUCION = PAGO - PRECIOPRODUCTO;

    // Se imprimen los resultados
    cout << "El cambio del cliente es: " << DEVOLUCION << endl;

    return 0;
}

