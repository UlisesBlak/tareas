// Listas Enlazadas.cpp 
// UlisesBlak

#include <iostream>

class nodo
{
public:
	int edad;
	std::string nombre;
	nodo* next;
};


int main()
{
	nodo* Iker = NULL;
	nodo* Tadeo = NULL;
	nodo* Jose = NULL;
	

	Iker = new nodo();
	Tadeo = new nodo();
	Jose = new nodo();

	Iker->edad = 18;
	Iker->nombre = "Iker";
	Iker->next = Tadeo;

	Tadeo->edad = 15;
	Tadeo->nombre = "Tadeo";
	Tadeo->next = Jose;

	Jose->edad = 12;
	Jose->nombre = "Jose";
	Jose->next = NULL;
}

while (Iker->next = NULL)

{
	std::cout << Iker->edad << std::endl;
	Iker = Iker->next;

}