// Operadores_aritmeticos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
         //El usuario tiene una tienda y quiere saber que productos vende y cuanto va ganar cuando
         //tambien quiere saber cuanto le costo cada producto para saber su ganancia


    
    int productos = 0;
    int costo_de_compra = 0;
    int costo_de_venta = 0;
    int total_juntado = 0;
    int total_invertido = 0;

    //pedirle al usuario los datos

    std::cout << "cuantos productos tienes?";
    std::cin >> productos;
    std::cout << "cual es el costo o de compra del producto?";
    std::cin >> costo_de_compra;

    total_invertido = productos * costo_de_compra;

    std::cout << total_invertido;

    std::cout << "a cuanto vendes el producto?";
    std::cin >> costo_de_venta;
    total_juntado = productos * costo_de_venta;

    std::cout << total_juntado;
    std::cout << "cual fue la cantidad invertida?";
    std::cin >> total_invertido;
    std::cout << "cual fue la cantidad que juntaste";
    std::cout << total_juntado

        //confirmacion de datos

        std::cout << "el total del producto es ----------->" << std::endl;
        std::cout << "usted compro sus productos a ----------->" << costo_de_compra; cout::endl;
        std::cout << "los productos los vendes a ------------>" << costo_de_venta; cout::endl;
        std::cout << "usted invirtio en total---------->" << total_invertido; cout::endl;
        std::cout << "usted junto en total ----------->" << total_juntado <<


}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
