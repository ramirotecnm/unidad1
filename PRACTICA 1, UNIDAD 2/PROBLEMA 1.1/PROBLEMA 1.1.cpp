#include <iostream>

using namespace std;

int main() {
    // Problema 1.1
    // Construye un programa que, dado el costo de un art�culo vendido y la cantidad
    // de dinero entregada por el cliente, calcule e imprima el cambio que debe entregar.

    // Declaraci�n de variables
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;

    // Entrada de datos
    cout << "Escribe el costo del art�culo: " << "\n";
    cin >> PRECIOPRODUCTO;

    cout << "Escribe cu�nto fue el pago del cliente: " << "\n";
    cin >> PAGO;

    // C�lculo de devoluci�n
    DEVOLUCION = PAGO - PRECIOPRODUCTO;

    // Se imprimen los resultados
    cout << "El cambio del cliente es: " << DEVOLUCION << endl;

    return 0;
}

