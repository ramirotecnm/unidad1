#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    float RADIO, ALTU, VOL, ARE;
    const float PI = 3.141592;  // Valor de PI

    // Entrada de datos
    cout << "Ingrese el radio del cilindro: ";
    cin >> RADIO;
    cout << "Ingrese la altura del cilindro: ";
    cin >> ALTU;

    // C�lculo del volumen (V = p * r^2 * h)
    VOL = PI * (RADIO * RADIO) * ALTU;

    // C�lculo del �rea (A = 2 * p * r * h)
    ARE = 2 * PI * RADIO * ALTU;

    // Salida de resultados
    cout << "El volumen del cilindro es: " << VOL << " unidades c�bicas" << endl;
    cout << "El �rea de la superficie del cilindro es: " << ARE << " unidades cuadradas" << endl;

    return 0;
}

