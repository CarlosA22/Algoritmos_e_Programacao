//5 - Faça um programa que manipula uma matriz quadrada de qualquer tamanho, somando os valores que não estão nem na diagonal principal nem na diagonal secundaria.

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main()
{
    srand(time(NULL));

    int mat[TAM][TAM];

    //preenche
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
                mat[i][j] = rand()%9+1;
        }
    }

    //imprime
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            cout << "\t" << mat[i][j];
        }
        cout << "\t\n";
    }

    //soma
    int soma=0;
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
                if (i != j && i+j != TAM-1)
                    soma += mat[i][j];
        }
    }
    cout << "Soma de valores da matriz: " << soma << endl;

    return 0;
}

