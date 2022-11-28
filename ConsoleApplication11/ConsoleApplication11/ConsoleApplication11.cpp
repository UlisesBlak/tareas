// MCD_Recursividad.cpp : UlisesBlak
// Este archivo es una calculadora de Maximo Comun Divisor
//

#include <iostream>
#include <string>
#include <Windows.h>

unsigned int contador = 0;

// Obtiene todos los primos previos a un numero dado
int* ObtenerPrimos(int valor) {

    for (int i = 1; i <= valor; i++)
    {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                if (i % j == 0) {
                    if (j == i) {
                        contador++;
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    int* primos = new int[contador];
    contador = 0;

    for (int i = 1; i <= valor; i++)
    {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                if (i % j == 0) {
                    if (j == i) {
                        primos[contador] = j;
                        contador++;
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }

    return primos;
}

// Obtiene todos los primos dividibles y los regresa en un array
int* MaximoComunDivisor(int valor, int primos[], int topIndice) {
    contador = 0;
    int valorBasura = valor;
    int indice = 0;

    while (valorBasura > 1) {
        if (valorBasura % primos[indice] == 0) {
            valorBasura = valorBasura / primos[indice];
            contador++;
        }
        else {
            indice++;
        }
    }

    indice = 0;
    int* resultados = new int[contador];
    contador = 0;

    while (valor > 1) {
        if (valor % primos[indice] == 0) {

            valor = valor / primos[indice];
            resultados[contador] = primos[indice];
            contador++;
        }
        else {
            indice++;
        }
    }
    return resultados;
}

// Obtiene todos los resultados comunes con una copia y los almacena y comunica en un array
int* ObtenerComunes(int resultados1[], int resultados2[], int maxIndex1, int maxIndex2, int indice = 0)
{
    int* resultadosHolder2 = new int[maxIndex2];
    int* comunesArr;

    for (int i = 0; i < maxIndex2; i++) {
        resultadosHolder2[i] = resultados2[i];
    }


    for (int i = 0; i < maxIndex1; i++) {
        for (int j = 0; j < maxIndex2; j++) {
            if (resultados1[i] == resultadosHolder2[j]) {
                indice++;
                resultadosHolder2[j] = -10;
            }
        }
    }

    comunesArr = new int[indice];
    contador = 0;

    for (int i = 0; i < maxIndex1; i++) {
        for (int j = 0; j < maxIndex2; j++) {
            if (resultados1[i] == resultados2[j]) {
                comunesArr[contador] = resultados2[j];
                contador++;
                resultados2[j] = -10;
            }
        }
    }

    return comunesArr;
}

// Uso recursividad para obtener el resultado
int ResultadoMCD(int comunes[], int comunesLongitud, int indice = 0, int resultado = 0) {
    if (comunesLongitud == 1) {
        return comunes[0];
    }
    else if (comunesLongitud == 0) {
        return 1;
    }

    if (indice == 0) {
        resultado = comunes[0];
        indice++;
        ResultadoMCD(comunes, comunesLongitud, indice, resultado);
    }
    else if (indice > 0 && indice < comunesLongitud) {
        resultado = resultado * comunes[indice];
        indice++;
        ResultadoMCD(comunes, comunesLongitud, indice, resultado);
    }
    else {
        return resultado;
    }
}

int main()
{
    unsigned int val, val2, primosMaxInt1, primosMaxInt2, resultadosMaxInt1, resultadosMaxInt2, comunesMax;
    int* primosValor1; int* primosValor2;
    int* ResultadosVal1;
    int* ResultadosVal2;
    int* comunes;

    std::cout << "Ingresa el primer digito para obtener el Maximo comun divisor\n";
    std::cin >> val;

    std::cout << "Ingresa el segundo digito para obtener el Maximo comun divisor\n";
    std::cin >> val2;

    // Obtiene todos los primos de cada valor
    primosValor1 = ObtenerPrimos(val);
    primosMaxInt1 = contador;

    primosValor2 = ObtenerPrimos(val2);
    primosMaxInt2 = contador;



    /*
    * Mostrador de primos
    for (int i = 0; i < contadorMax; i++) {
        std::cout << primosValor1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < contadorMax2; i++) {
        std::cout << primosValor2[i] << " ";
    }
    std::cout << std::endl;
    */

    // Guardar resultados de cada division de primos
    ResultadosVal1 = MaximoComunDivisor(val, primosValor1, primosMaxInt1);
    resultadosMaxInt1 = contador;

    ResultadosVal2 = MaximoComunDivisor(val2, primosValor2, primosMaxInt2);
    resultadosMaxInt2 = contador;

    // Para acortar el bucle, se escoge cual es el que es que tiene menos valores para darle prioridad
    if (resultadosMaxInt1 >= resultadosMaxInt2)
    {
        comunes = ObtenerComunes(ResultadosVal1, ResultadosVal2, resultadosMaxInt1, resultadosMaxInt2);
        comunesMax = contador;
    }
    else {
        comunes = ObtenerComunes(ResultadosVal2, ResultadosVal1, resultadosMaxInt2, resultadosMaxInt1);
        comunesMax = contador;
    }

    system("CLS");

    std::cout << "El MCD de " << val << " y " << val2 << " es: " << ResultadoMCD(comunes, comunesMax);
}