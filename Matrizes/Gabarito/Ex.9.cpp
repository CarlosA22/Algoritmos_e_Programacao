//9 - Elabore um algoritmo que leia uma matriz 5 x 5, calcule e imprima a soma de todos seus valores.

#include <iostream>
using namespace std;

#define TAM 5

int main()
{

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

    float soma = 0;
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            soma = soma + mat[i][j];
        }
    }

    cout << "Soma: " << soma;


    return 0;
}



