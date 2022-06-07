///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4-Declare um vetor de 15 inteiros, leia um valor para cada posi��o e no final mostre os elementos deste vetor em posi��o inversa ao que foram atribu�dos//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 15

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM];
    for (int i=0; i<TAM; i++){
        cout << "Digite um valor: ";
		cin >> vet[i];
    }
    cout << "\nInversa: ";
    for (int i=TAM-1; i>=0; i--)
        cout << vet[i] << "\t";
    return 0;
}

