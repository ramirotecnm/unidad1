#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float RADIO, ALTU, VOL, ARE;
    const float PI = 3.141592;  // Valor de PI

    // Entrada de datos
    cout << "Ingrese el radio del cilindro: ";
    cin >> RADIO;
    cout << "Ingrese la altura del cilindro: ";
    cin >> ALTU;

    // Cálculo del volumen (V = p * r^2 * h)
    VOL = PI * (RADIO * RADIO) * ALTU;

    // Cálculo del área (A = 2 * p * r * h)
    ARE = 2 * PI * RADIO * ALTU;

    // Salida de resultados
    cout << "El volumen del cilindro es: " << VOL << " unidades cúbicas" << endl;
    cout << "El área de la superficie del cilindro es: " << ARE << " unidades cuadradas" << endl;

    return 0;
}

