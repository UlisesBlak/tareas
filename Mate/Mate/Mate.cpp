#include <iostream>

using namespace std;

void menu();
void menu()
{
	cout << "\n         Detector de Numeros Primos"
		<< "\n============================================";
}

int main()
{
	int num;
	cin >> num;
	bool numero_primo = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) numero_primo = false;
	}

	if (numero_primo == true) cout << "El NUMERO ES PRIMO";
	else cout << "EL NUMERO NO ES PRIMO";


		return 0;
}
