#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
   // Declaración de variables
   int DIAS;
   float SEGUNDOS;
   // Entrada de datos
   cout << "Escribe el nUmero de dIas para calcular los segundos " << "\n";
   cin >> DIAS;
   // Cálculo
   SEGUNDOS = DIAS * 24 * 60 * 60;
   // Se imprime el resultado
   cout << "En " << DIAS << " dIas, hay " << SEGUNDOS << " segundos" << "\n";
   return 0;
}
