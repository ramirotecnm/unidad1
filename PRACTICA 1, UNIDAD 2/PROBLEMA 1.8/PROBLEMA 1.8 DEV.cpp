#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Problema 1.8: Calcular la distancia entre dos puntos dados sus coordenadas (X1, Y1) y (X2, Y2)
    
    // Declaraci�n de variables
    float X1, Y1, X2, Y2, DIS;
    
    // Entrada de datos
    cout << "Escribe la coordenada X del primer punto: "; 
    cin >> X1;
    
    cout << "Escribe la coordenada Y del primer punto: "; 
    cin >> Y1;
    
    cout << "Escribe la coordenada X del segundo punto: "; 
    cin >> X2;
    
    cout << "Escribe la coordenada Y del segundo punto: "; 
    cin >> Y2;
    
    // C�lculo de la distancia usando la f�rmula de distancia euclidiana
    DIS = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
    
    // Imprimir resultados
    cout << "La distancia entre el punto (" << X1 << ", " << Y1 << ") y el punto (" << X2 << ", " << Y2 << ") es " << DIS << "\n";
    
    return 0;
}

