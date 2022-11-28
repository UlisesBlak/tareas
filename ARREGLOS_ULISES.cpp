// ARREGLOS_ULISES.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>
#include<locale>



int main()
{

	int  vec1[10];
	char vec2[50];
	bool vec3[60];
	std::string vec4[100];
	float vec5[2];
	double vec6[5];

	

	//Arreglos Predefinidos

	std::string vec7[5] = { "Dato1", "Dato2", "Dato3", "Dato4", "Dato5" };
	int vec8[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::cout << " El vector 7 en su posicion 3 tiene a " << vec7[2] << std::endl;
	std::cout << " El vector 7 en su posicion 2 tiene a " << vec7[1] << std::endl;

	vec7[0] = "Ulises";
	std::cout << " El vector 7 en su posicion 1 tiene a" << vec7[0] << std::endl;

	for (int i = 0; i < 5; i++)

	{
		std::cout << " El vector 7 en su posicion " << i << " tiene a " << vec7[i] << " y es el elemento " << i + 1 << std::endl;
	}


}