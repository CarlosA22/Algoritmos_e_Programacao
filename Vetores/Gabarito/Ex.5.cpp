//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2-Leia dois vetores A e B com vinte elementos. Construa um terceiro vetor C, onde cada elemento � a subtra��o do elemento correspondente de A com B.//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 3

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int a[TAM],b[TAM],c[TAM];
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
    cout << "Valores resultantes: |";
    for (int i=0; i<TAM; i++){
        c[i] = a[i]-b[i];
        cout << c[i] << "|";
    }

    return 0;
}

