#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    float GAL, TOTAL;
    const float LITROS_POR_GALON = 3.785;  // Cada gal�n tiene 3.785 litros
    const float PRECIO_POR_LITRO = 8.20;   // Precio del litro en pesos

    // Entrada de datos
    cout << "Ingrese la cantidad de galones surtidos: ";
    cin >> GAL;

    // C�lculo del total a pagar
    TOTAL = GAL * LITROS_POR_GALON * PRECIO_POR_LITRO;

    // Salida de resultados
    cout << "El total a pagar es: $" << TOTAL << endl;

    return 0;
}

