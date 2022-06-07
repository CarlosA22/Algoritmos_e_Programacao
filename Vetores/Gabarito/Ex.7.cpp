
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7 - Construa um algoritmo que solicite 5 valores inteiros ao usuário e os armazene em um vetor. Após, deverá ser invertido os valores do vetor utilizando um segundo vetor.//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 5

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int a[TAM],b[TAM];
    cout << "Preencha o vetor a ser invertido...\n";
    for (int i=0; i<TAM; i++){
        cout << "Digite um número: ";
        cin >> a[i];
    }

    cout << "\nValores contidos no vetor na order que foram digitados:\n|";
    for (int i=0; i<TAM; i++){
        b[i] = a[i];
        cout << a[i] << " | ";
    }

    int j;
    for (int i=0; i<TAM; i++) {
        j=TAM-1-i;
        a[i]=b[j];
    }

    cout << "\nValores invertidos:\n|";
    for (int i=0; i<TAM; i++){
        cout << a[i] << " | ";
    }

    return 0;
}

