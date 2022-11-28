#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int mat3[3][3];
    int matriz5[5][5];
    int matriz10[10][10];
    int i, j;
    srand(time(0));

    std::cout << "matriz3";
    for (i = 0; i < (sizeof(mat3) / (sizeof(mat3[0]))); i++)
    {
        for (j = 0; j < (sizeof(mat3) / (sizeof(mat3[0][0]))); j++)
        {
            mat3[i][j] = rand() % 11;
        }
    }
    for (i = 0; i < (sizeof(mat3) / (sizeof(mat3[0]))); i++)
    {
        for (j = 0; j < (sizeof(mat3) / (sizeof(mat3[0][0]))); j++)
        {
            std::cout << mat3[i][j] << " ";
        }
        std::cout << std::endl;
    }



    std::cout << "matriz5";

    for (i = 0; i < (sizeof(matriz5) / (sizeof(matriz5[0]))); i++)
    {
        for (j = 0; j < (sizeof(matriz5) / (sizeof(matriz5[0][0]))); j++)
        {
            matriz5[i][j] = rand() % 11;
        }
    }
    for (i = 0; i < (sizeof(matriz5) / (sizeof(matriz5[0]))); i++)
    {
        for (j = 0; j < (sizeof(matriz5) / (sizeof(matriz5[0][0]))); j++)
        {
            std::cout << matriz5[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "matriz 10";

    for (i = 0; i < (sizeof(matriz10) / (sizeof(matriz10[0]))); i++)
    {
        for (j = 0; j < (sizeof(matriz10) / (sizeof(matriz10[0][0]))); j++)
        {
            matriz10[i][j] = rand() % 11;
        }
    }
    for (i = 0; i < (sizeof(matriz10) / (sizeof(matriz10[0]))); i++)
    {
        for (j = 0; j < (sizeof(matriz10) / (sizeof(matriz10[0][0]))); j++)
        {
            std::cout << matriz10[i][j] << " ";
        }
        std::cout << std::endl;
    }





}