//7 - Faça um programa que preenche duas matrizes, uma M (4X6) e outra N (6X4). A seguir o programa deverá criar uma nova matriz que seja o produto matricial de M por N.

#include <iostream>
using namespace std;

#define IND1 4 //valor de indice linhas/coluna
#define IND2 6 //valor de indice linhas/coluna

int main()
{
    int M[IND1][IND2], N[IND2][IND1], R[IND1][IND1]={};

    for (int i = 0; i < IND1; i++){
        for (int j = 0;j < IND2; j++){
           cout << "Digite um valor: ";
           cin >> M[i][j];
        }
    }

    for (int i = 0; i < IND2; i++){
        for (int j = 0;j < IND1; j++){
           cout << "Digite um valor: ";
           cin >> N[i][j];
        }
    }

    for(int i=0; i<IND1; i++){ //linhas da matriz M
        for(int j=0; j<IND1; j++){ //colunas da matriz N
            for(int k=0; k<IND2; k++){ //índice que deve ser percorrido para caluclar todos os itens
                R[i][j] += M[i][k] * N[k][j];
            }
        }
    }

    //produto matricial (alterar indices para manipular)
    for (int i = 0; i < IND1; i++){
        for (int j = 0;j < IND1; j++){
            cout << "\t" << R[i][j];
        }
        cout << "\t\n";
    }
    cout << endl;

    return 0;
}

