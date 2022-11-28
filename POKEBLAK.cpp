// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int   elec;
int   sel;
float hp;
float enemy;
float res;


int main()

{
	std::cout << "Bienvenido a Fosfoleon compare/n";
	std::cout << "El malvado GOBERNATHORE se ha apoderado de la federacion/n";
	std::cout << "Para detenerlo, tendras que seleccionar a uno de los siguientes pokeregios/n";

	std::cin << "1.- Regio_Chu/n, 2.-Chariwillo/n, 3- Charmander_Piña/n" << std::endl;
	std::cin >> elec;
}

	if (elec == 1)
	{
		std::cout << "Escogiste a Regio_chu/n";
		std::cout << "Pelearas con Chariwillo/n"<< std::endl;
		hp = 70 enemy = 80;
	}

	if (elec == 2)
	{
		std::cout << "Escogiste a Charmander_Piña/n;
		std::cout << "Pelearas con Regio_Chu/n" << std::endl;
		hp = 70 enemy = 80;
	}

	if (elec == 3)
	{
		std::cout << "Escogiste a Chariwillo/n;
			std::cout << "Pelearas con Charmander_Piña" std::endl;
		hp = 70 enemy = 80;
	}

	std::cout << " LA BATALLA ESTA POR COMENZAR " << std::endl;

	do
	{

		std::cout << "  vida: " << hp << " Enemigo: " << enemy << std::endl;
		std::cout << " Que hacemos" << std::endl;
		std::cout << " 1.-Atacar \n 2.-Defender" << std::endl;

		std::cin >> sel;

		if (sel == 1)
		{
			res = enemy -= 15
			hp = hp -= 7;

		}
		if (sel == 2)
		{
			hp = hp -= 12

		}
		if (res < 0)
		{
			std::cout << "Mamamos" << std::endl;
			break;
		}
		if (hp == 0)
		{
			std::cout << "Mamaste" << std::endl;
			break;
		}
	} while (true);

}
