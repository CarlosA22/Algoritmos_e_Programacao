/*
10 - Faça um algoritmo que realize as seguintes tarefas com matrizes 3 x 5 de números inteiros:
a) Ler uma matriz A.
b) Ler uma matriz B.
c) Gerar uma matriz C com a soma dos elementos da matriz A e B.
d) Mostrar todos os elementos da linha 2 da matriz C.
e) Mostrar todos os elementos da coluna 3 da matriz C.
*/


#include <iostream>
using namespace std;

#define LIN 3
#define COL 5

int main()
{
    float A[LIN][COL], B[LIN][COL], C[LIN][COL];

    cout << "\nLeitura da matriz A: " << endl;
    for (int i = 0; i < LIN; i++){
        for (int j = 0;j < COL; j++){
            cout << "Digite um valor: ";
            cin >> A[i][j];
        }
    }

    cout << "\nLeitura da matriz B: " << endl;
    for (int i = 0; i < LIN; i++){
        for (int j = 0;j < COL; j++){
            cout << "Digite um valor: ";
            cin >> B[i][j];
        }
    }

    //Soma de A e B
    for (int i = 0; i < LIN; i++){
        for (int j = 0;j < COL; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nExibição da matriz C: " << endl;
    for (int i = 0; i < LIN; i++){
        for (int j = 0;j < COL; j++){
            cout << "\t" << C[i][j];
        }
        cout << "\t\n";
    }

    cout << "\nElementos da linha 2 da matriz C: " << endl;
    for (int j = 0;j < COL; j++){ //total de itens da linha
            cout << "\t" << C[2][j];
    }

    cout << "\nElementos da coluna 3 da matriz C: " << endl;
    for (int j = 0;j < LIN; j++){ //total de itens da coluna
            cout << "\t" << C[j][3];
    }

    return 0;
}



