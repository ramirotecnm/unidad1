#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
   // Declaraci�n de variables
   string NOMBRE;
   float PESOLIBRAS, LONGITUDENPIES;
   float PESOENKILOS, LONGITUDENMETROS;
   
   // Entrada de datos
   
   cout << "Escribe el nombre del dinosaurio " << "\n";
   cin >> NOMBRE;
   
   cout << "Escribe el peso del dinosaurio en libras " << "\n";
   cin >> PESOLIBRAS;
   
   cout << "Escribe la longitud del dinosaurio en pies " << "\n";
   cin >> LONGITUDENPIES;
   
   // C�lculo
   PESOENKILOS = PESOLIBRAS * 1000;
   LONGITUDENMETROS = LONGITUDENPIES * 0.3048;
   // Se imprime el resultado
   cout << "El peso en kilos del dinosaurio " << NOMBRE << " es " << PESOENKILOS << " y la longitud en metros es " << LONGITUDENMETROS << "\n";
   return 0;
}
