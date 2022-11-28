#include <iostream>
#include <string>

int main()
{
    std::string color_cabello;
    std::string color_ropa;
    std::string parte;
    std::string bueno_malo;
    std::string stand;
    std::string familia;

    std::cout << "Hola, bienvenido a Adivina Quien con personajes de Jojos\n";
    std::cout << "Los personajes son Jotaro, Joseph, Josuke, Jolyne, Giorno y Dio\n";
    system("pause");
    system("cls");
    std::cout << "te parece si inicamos a jugar?\n";
    std::cout << "Tu personaje de que color tiene el cabello?\n";
    std::cin >> color_cabello;
    if (color_cabello == "rubio")
    {
        std::cout << "Entonces tu personaje tiene el pelo rubio\n";
        std::cout << "De que familia es?\n";
        std::cin >> familia;
        if (familia == "Joestar")
        {
            std::cout << "Entonces es un Joestar\n";
            std::cout << "De que parte es?\n";
            std::cin >> parte;
            if (parte == "5")
            {
                std::cout << "Es de la parte 5\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "bueno")
                {
                    std::cout << "Entonces tu personaje es bueno\n";
                    std::cout << "Que stand tiene?\n";
                    std::cin >> stand;
                    if (stand == "GE")
                    {
                        system("cls");
                        system("color 6");
                        std::cout << "Tu personaje es Giorno\n";

                    }
                }
            }
            if (parte == "6")
            {
                std::cout << "Es de la parte 6\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "bueno")
                {
                    std::cout << "Entonces tu personaje es bueno\n";
                    std::cout << "Que stand tiene?\n";
                    std::cin >> stand;
                    if (stand == "SF")
                    {
                        system("cls");
                        system("color 2");
                        std::cout << "Tu personaje es Jolyne\n";
                    }
                }
            }
        }
        if (familia == "Brando")
        {
            std::cout << "Entonces es un Brando\n";
            std::cout << "De que parte es?\n";
            std::cin >> parte;
            if (parte == "3")
            {
                std::cout << "Es de la parte 3\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "malo")
                {
                    std::cout << "Entonces tu personaje es malo\n";
                    std::cout << "Que stand tiene?\n";
                    std::cin >> stand;
                    if (stand == "TW")
                    {
                        system("cls");
                        system("color 6");
                        std::cout << "Tu personaje es Dio\n";
                    }
                }
            }
        }
    }
    if (color_cabello == "negro")
    {
        std::cout << "Entonces tu personaje tiene el pelo negro\n";
        std::cout << "De que color es su ropa?\n";
        std::cin >> color_ropa;
        if (color_ropa == "negro")
        {
            std::cout << "Entonces su ropa es negra\n";
            std::cout << "De que parte es?\n";
            std::cin >> parte;
            if (parte == "3")
            {
                std::cout << "Es de la parte 3\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "bueno")
                {
                    std::cout << "Entonces tu personaje es bueno\n";
                    std::cout << "Que stand tiene?\n";
                    std::cin >> stand;
                    if (stand == "SP")
                    {
                        system("cls");
                        system("color 1");
                        std::cout << "Tu personaje es Jotaro\n";

                    }
                }
            }
        }
    }
    if (color_cabello == "cafe")
    {
        std::cout << "Entonces tu personaje tiene el pelo cafe\n";
        std::cout << "De que familia es?\n";
        std::cin >> familia;
        if (familia == "Joestar")
        {
            std::cout << "Entonces eres un Joestar\n";
            std::cout << "De que parte es?\n";
            std::cin >> parte;
            if (parte == "2")
            {
                std::cout << "Es de la parte 2\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "bueno")
                {
                    std::cout << "Entonces tu personaje es bueno\n";
                    std::cout << "Que stand tiene?\n";
                    std::cin >> stand;
                    if (stand == "HP")
                    {
                        system("cls");
                        system("color 8");
                        std::cout << "Tu personaje es Joseph\n";

                    }
                }
            }
        }
    }
    if (color_cabello == "azul")
    {
        std::cout << "Entonces tu personaje tiene el pelo azul\n";
        std::cout << "De que color es su ropa\n";
        std::cin >> color_ropa;
        if (color_ropa == "azul")
        {
            std::cout << "Entonces tu ropa es azul\n";
            std::cout << "De que parte es?\n";
            std::cin >> parte;
            if (parte == "4")
            {
                std::cout << "Es de la parte 4\n";
                std::cout << "Es bueno o malo?\n";
                std::cin >> bueno_malo;
                if (bueno_malo == "bueno")
                {
                    std::cout << "Entonces tu personaje es bueno\n";
                    std::cout << "Que stand tiene?\n";
                    std::cin >> stand;
                    if (stand == "CD")
                    {
                        system("cls");
                        system("color 5");
                        std::cout << "Tu personaje es Josuke\n";

                    }
                }
            }
        }
    }
}