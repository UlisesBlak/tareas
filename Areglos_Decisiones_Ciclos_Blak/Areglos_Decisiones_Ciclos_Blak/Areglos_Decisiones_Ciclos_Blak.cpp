// Ulises Blak
// Arreglos
// Decisiones
// Ciclos
//

#include <iostream>
#include <stdio.h>
// Añade paquete de idiomas
#include <locale.h>
using namespace std;
int main()
{
    /* initialize random seed: */
    srand(time(NULL));
    setlocale(LC_ALL, "spanish");
    int matriz[3][3];
    //Recorrer la matriz para darle un valor aleatorio a cada posición
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = 1; //Aleatorios del 0 al 9
        }
    }
    //Recorrer la matriz para mostrarla
    for (int n = 0; n < 3; n++)
    {
        for (int m = 0; m < 3; m++)
        {
            cout << matriz[n][m] << " ";
        }
        cout << endl;
    }
}