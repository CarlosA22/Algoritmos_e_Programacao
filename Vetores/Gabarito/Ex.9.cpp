
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//9-Fa�a um programa que leia dois vetores A e B, de tamanho 8, e realize a troca dos elementos destes vetores; ou seja, ap�s a execu��o do programa o vetor B dever� conter os valores fornecidos para o vetor A, e vice-versa.//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 8

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int a[TAM],b[TAM], temp;
    cout << "Preencha o vetor A...\n";
    for (int i=0; i<TAM; i++){
        cout << "Digite um n�mero: ";
        cin >> a[i];
    }
    cout << "\nAgora, preencha o vetor B...\n";
    for (int i=0; i<TAM; i++){
        cout << "Digite um n�mero: ";
        cin >> b[i];
    }
    //Procedimento de troca de valores
    for (int i=0; i<TAM; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    cout << "\nValores resultantes de A: \n";
    for (int i=0; i<TAM; i++){
        cout << "| " << a[i] << " | \n";
    }
    cout << "\nValores resultantes de B: \n";
    for (int i=0; i<TAM; i++){
        cout << "| " << b[i] << " | \n";
    }
    return 0;
}

