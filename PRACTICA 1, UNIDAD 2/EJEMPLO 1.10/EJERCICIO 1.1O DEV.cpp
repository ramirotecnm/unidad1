#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
   float Altura, Base;
   float SUPERFICIE, PERIMETRO;
   //Mensaje de bienvenida
   cout << "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";
   // Se pide el primer n�mero
   cout << "Por favor ingrese el valor de la Base: " << "\n";
   cin >> Base;
   // Se pide el segundo n�mero
   cout << "Por favor ingrese el valor de la Altura: " << "\n";
   cin >> Altura;
   // C�lculo de la superficie y el per�metro
   SUPERFICIE = Base * Altura;
   PERIMETRO = 2 * (Base + Altura);
   // Se muestra el resultado
   printf("\n La Superficie del rect�ngulo es %5.2f \n", SUPERFICIE);
   printf("\n El per�metro del rect�ngulo es %5.2f \n", PERIMETRO);
   return 0;
}
