#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
    int A, B;
    float RES;
    
    // Mensaje de bienvenida
    cout << "�Hola! Este programa 1.7 Escribir el resultado de la expresi�n" << "\n";
    
    // Se declaran los n�meros que se sumar�n (pueden ser decimales)
    
    // Se pide el primer n�mero
    cout << "Por favor ingrese el valor de A: " << "\n";
    // Se asigna el primer valor a A
    cin >> A;
    
    // Se pide el segundo n�mero
    cout << "Por favor ingrese el valor de B: " << "\n";
    // Se asigna el segundo valor a B
    cin >> B;
    
    // Se calcula el resultado
    RES = ((A + B) * (A + B)) / 3.0;

    // Se muestra el resultado
    printf("\nEl resultado de la expresi�n es %5.4f \n", RES);
    cout << "EL RESULTADO DE LA EXPRESION ES " << RES << "\n";

    return 0;
}

