// 2022_11_02_000_Asesorias.cpp :
//  Mauricio Cabrera
// Asesorias progra
// Arreglos
// Decisiones
// Ciclos
//

#include <iostream>
#include <stdio.h>
// Añade paquete de idiomas
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "spanish");
    string nombre = "Mau";
    string contra = "test123";
    string n1;
    string c1;
    int caso;
    cout << "Cual es tu nombre? " << endl;
    cin >> n1;
    //Si el nombre ingresado es igual al guardado permitirle el acceso
    //e imprimir un bienvenido
    // Solicitar la contraseña y si es erronea salir
    // Si es correcta decirle arre lulu.
    //Si no es igual decirle te equivocaste y terminal la ejecución.
    // 1 signo igual asigna valores
    //2 signos iguales compara las variables
    if (n1 == nombre)
    {
        cout << "Bienvenido " << nombre << endl;
        cout << "Ingresa tu contraseña: " << endl;
        cin >> c1;

        if (c1 == contra)
        {
            cout << "Arre lulu que quieres hacer\n" <<
                "1.-Ver saldo\n2.-Retirar\n3.-Salir" << endl;
            cin >> caso;
            switch (caso)
            {
            case 1:
                cout << "No tiene lana vato" << endl;
                break;
            case 2:
                cout << "jajaja que quieres retirar si no tienes" << endl;
                break;
            case 3:
                cout << "Sale bay" << endl;
                break;
            default:
                cout << "No ingresaste ninguna opción valida." << endl;
                break;
            }
        }
        else
        {
            cout << "mamaste lulu " << endl;
        }
    }
    else
    {
        cout << "mamaste " << endl;
    }
}