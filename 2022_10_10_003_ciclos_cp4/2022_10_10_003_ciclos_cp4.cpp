// Project3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    bool seguir = true;
    int contador = 0;
    //que usemos while, dice...
    while (seguir)
    {
        std::cout << "#" << contador << std::endl;
        contador = contador + 1;
        if (contador == 100)
        {
            seguir = false;
        }
        }

    }
    