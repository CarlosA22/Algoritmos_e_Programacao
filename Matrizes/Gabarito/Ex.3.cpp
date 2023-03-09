//3 - Faça um programa que solicita ao usuário 25 valores reais e armazene em uma matriz 5x5. A seguir troque todos os elementos da matriz que sejam maiores do que 100 pelo valor zero. Exiba a matriz original e alterada.

#include <iostream>
using namespace std;

#define TAM 5

int main()
{
    float mat[TAM][TAM];

    //preenche
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            cout << "Digite um valor: ";
            cin >> mat[i][j];
        }
    }

    //troca
    for (int i = 0; i < TAM; i++){
        for (int j = 0;j < TAM; j++){
            if (mat[i][j] > 100)
                mat[i][j] = 0;
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



