//Proyecto Matematicas
//Identificador de numeros primos

#include <iostream>

using namespace std;

int main()

{
	int num;
	cin >> num;
	bool numero_primo = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) numero_primo = false;
	}

	if (numero_primo == true) cout << "El Numero es Primo";
	else cout << "El Numnero no es Primo";

	return 0;


}
