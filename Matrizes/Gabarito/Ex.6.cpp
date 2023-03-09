//6 - Faça um programa que solicita ao usuário 16 valores reais e armazene em uma matriz 4x4. O programa deve somar os elementos de cada uma das linhas armazenando o resultado da soma em um vetor. A seguir, deve multiplicar cada elemento da matriz pela soma da sua respectiva linha. Exiba na tela a matriz resultante.

#include <iostream>
using namespace std;

#define TAM 4

int main()
{
    float mat[TAM][TAM], vet[TAM];

    //preenche
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            cout << "Digite um valor: ";
            cin >> mat[i][j];
        }
    }


    //soma vetor
    for (int i = 0; i < TAM; i++){
        vet[i]=0;
        for (int j = 0;j < TAM; j++){
            vet[i] += mat[i][j];
        }
    }

    //multiplica
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
             mat[i][j] = mat[i][j] * vet[i];
        }
    }


    //imprime
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            cout << "\t" << mat[i][j];
        }
        cout << "\t\n";
    }
    cout << endl;

    return 0;
}

