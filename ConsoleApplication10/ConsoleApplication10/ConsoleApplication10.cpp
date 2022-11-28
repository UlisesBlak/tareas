// 31_10_22_Ulises_Arreglos_Dinamicos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()

{

	int edades[3][2] = { {1,2},{9,8},{14,21} };
	int filas = (sizeof(edades) / sizeof(edades[0]));
	cout << filas;

	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	cout << columnas;

}

// Recorrer Matriz:


//int matriz[3][3];
//int matriz[5][5];
//int matriz[10][10];
//cout << matriz[3][2] << ;	


// Trabajo:


{
	int edades[3][3] = {}
}