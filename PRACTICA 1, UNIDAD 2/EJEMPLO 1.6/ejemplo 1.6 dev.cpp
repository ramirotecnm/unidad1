#include "iostream"
#include "string"

using namespace std;

int main()
{
    // Mensaje de bienvenida
    cout << "�Hola! Este programa 1.6 escribe los datos en orden inverso" << "\n";
    
    // Se declaran los numeros que se sumar�n (pueden ser decimales)
    int A, B, C, D;
    
    // Se pide el primer n�mero
    cout << "Por favor ingrese el primer valor A:   " << "\n";
    
    // Se asigna el primer valor a A
    cin >> A;
    
    // Se pide el segundo n�mero
    cout << "Por favor ingrese el segundo valor B:   " << "\n";
    
    // Se asigna el segundo valor a B
    cin >> B;
    
    // Se pide el tercer n�mero
    cout << "Por favor ingrese el tercer valor C:   " << "\n";
    
    // Se asigna el tercer valor a C
    cin >> C;
    
    // Se pide el cuarto n�mero
    cout << "Por favor ingrese el cuarto valor D:   " << "\n";
    
    // Se asigna el cuarto valor a D
    cin >> D;
    
    // Se muestra el resultado en orden inverso
    cout << D << " , " << C << " , " << B << " , " << A << endl;
    
    return 0;
}

