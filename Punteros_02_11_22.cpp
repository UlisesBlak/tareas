// Punteros_02_11_22.cpp : 
// Ulises Blak
// Practica de punteros 

#include <iostream> // Control de entradas y salidas
#include <locale>   // Interpretar idiomas
#include <stdlib.h> // Nos protege de bucles infinitos
#include <cstdlib>  // Li9bhreria de C para entradas y salidas del sistema
#include <Windows.h>// Funciones de control por pausas y dormidas 


int main()
{
	//Declaracion de un puntero
	int edad = 0;
	int* apuntador = &edad;
	std::cout << " Valor de la variable edad: " << edad << std::endl;
	*apuntador = 20;
	std::cout << " Valor de la variable edad: " << edad << std::endl;
	std::cout << " Direccion de memoria del puntero: " << apuntador << std::endl;
	std::cout << " Valor del apuntador: " << *apuntador << std::endl;
	std::cout << " Direccion de memoria de la edad " << &edad << std::endl;

		system("pause");
	apuntador = NULL;

}