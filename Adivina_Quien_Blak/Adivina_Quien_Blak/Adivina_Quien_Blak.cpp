//Blakinator
//Ulises Blak


#include <iostream>
#include <string>



int main()

{
    std::string vocalista;
    std::string color_cabello;
    std::string pais;
    std::string taping;
    std::string rola;
    std::string epoca;  
    std::string f;









    std::cout << "Hola, bienvenido a Adivina Quien con artistas de rock!!\n";
    std::cout << "Nuestros famosos rosckstars son Axl Rose, Van Halen, John Petrucci, Nikky Six y Fer Velasco\n";
    system("pause");
    system("cls");


    std::cout << "Ta listo compare?\n";



    std::cout << "Este rockstar es vocalista?\n";
    std::cin >> vocalista;
    if (vocalista == "si")

    {
        std::cout << "Entonces canta chido el compa?\n";
        std::cout << "De que epoca es?\n";
        std::cin >> epoca;
        if (epoca == "80")
        {
            std::cout << "Buenos tiempos\n";
            std::cout << "De donde es?\n";
            std::cin >> pais;
            if (pais == "usa")
            {
                std::cout << "Gringo, mmmm!?\n";
                std::cout << "Es rubio?\n";
                std::cin >> color_cabello;
                if (color_cabello == "si")
                {
                    std::cout << "Ta guapo el compa\n";
                    std::cout << "Canta Noviembre Sin Ti?\n";
                    std::cin >> rola;
                    if (rola == "si")
                    {
                        system("cls");
                        system("color 6");
                        std::cout << "Tu rockstar es Axl Rose\n";

                    }
                }
            }
        }
    }



   if (vocalista == "no")
   {
        std::cout << "***c queda pensando\n";
       std::cout << "Tu rockstar era el dios del tapping?\n";
       std::cin >> taping;
       if (taping == "si")
       {
            std::cout << "Lo sabia\n";
            std::cout << "Este crack ya chingo a su madre :(\n";
            std::cin >> f;
            if (f == "si")
            {
                system("cls");
               system("color 2");
               std::cout << "Que descanse en paz el dios Eddie Van Halen ♥\n";

           }
       }
   }

}


