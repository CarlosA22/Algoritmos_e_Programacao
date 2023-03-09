//1 - Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições.

#include <iostream>
using namespace std;

#define TAM 5

int main()
{
    int mat[TAM][TAM];

    //preenche
    for (int i = 0; i < TAM; i++){      //percorre as linhas
        for (int j = 0;j < TAM; j++){   //percorre as colunas
            mat[i][j] = 1;
        }
    }

    //imprime
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            cout << "\t" << mat[i][j];
        }
        cout << "\t\n";
    }

    return 0;
}

