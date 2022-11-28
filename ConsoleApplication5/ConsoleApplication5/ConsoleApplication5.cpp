#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int loop = 0;
	while (loop == 0)
	{

		float suma, resta, multi, division, menu, a, b, res;
		system("CLS");
		printf("Seleccione una de las siguientes opciones:");
		printf("\n\n1.-Suma\n2.- Resta\n3.-Multiplicacion\n4.-Division\n\n");
		scanf("%f", &menu);
		if (menu == 1)
		{
			system("CLS");
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
			printf("\nIngrese segundo numero\n");
			scanf("%f", &b);
			res = a + b;
			printf("El resultado de la suma de %.1f + %.1f es %.1f\n\n", a, b, res);
			system("PAUSE");

		}
		if (menu == 2)
		{
			system("CLS");
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
			printf("\nIngrese segundo numero\n");
			scanf("%f", &b);
			res = a - b;
			printf("\nEl resultado de la suma de %.1f - %.1f es %.1f\n\n", a, b, res);
			system("PAUSE");
		}
		if (menu == 3)
		{
			system("CLS");
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
			printf("\nIngrese segundo numero\n");
			scanf("%f", &b);
			res = a * b;
			printf("\n\nEl resultado de la multiplicacion de %.1f * %.1f es %.1f\n\n", a, b, res);
			system("PAUSE");
		}
		if (menu == 4)
		{
			system("CLS");
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
			printf("\nIngrese segundo numero\n");
			scanf("%f", &b);
			res = a / b;
			printf("\n\nEl resultado de la division de %.1f / %.1f es %.1f\n\n", a, b, res);
			system("PAUSE");
		}
	}
	return 0;
}