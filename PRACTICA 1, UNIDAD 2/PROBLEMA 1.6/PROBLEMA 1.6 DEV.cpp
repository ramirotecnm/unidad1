#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
   // Declaraci�n de variables
   int DIAS;
   float SEGUNDOS;
   // Entrada de datos
   cout << "Escribe el nUmero de dIas para calcular los segundos " << "\n";
   cin >> DIAS;
   // C�lculo
   SEGUNDOS = DIAS * 24 * 60 * 60;
   // Se imprime el resultado
   cout << "En " << DIAS << " dIas, hay " << SEGUNDOS << " segundos" << "\n";
   return 0;
}
