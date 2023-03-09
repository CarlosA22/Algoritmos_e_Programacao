//8 - Faça um programa que preenche uma matriz de 4X4 com números reais. O programa deve exibir qual a posição (linha e coluna) do elemento minimax, ou seja, o menor valor que esteja na linha em que se encontra o maior valor da matriz.

#include <iostream>
using namespace std;

#define TAM 4

int main()
{
    int indi=0, indj=0;
    float mat[TAM][TAM];

    int i,j;
    for (i = 0; i < TAM; i++){
        for (j = 0;j < TAM; j++){
            cout << "Digite um valor: ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            cout << "\t" << mat[i][j];
        }
        cout << "\t\n";
    }

    float aux = mat[0][0];
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            if (aux < mat[i][j]){
                aux = mat[i][j];
                indi = i;
            }
        }
    }
    for (int i = 0; i < TAM; i++){
         if (aux > mat[indi][i]){
                aux = mat[indi][i];
                indj = i;
        }
    }

    cout << "Valor minimax: mat[" << indi+1 << "]" << "[" << indj+1 << "] -> " << mat[indi][indj];


    return 0;
}



