/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//6-Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre o calculo do fatorial do maior e do menor.//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#define TAM 10



int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM],mai,men,fatma,fatme;
    for (int i=0; i<TAM; i++)
            vet[i]=0;
    for (int i=0; i<TAM; i++){
            cout << "Digite um número: ";
            cin >> vet[i];}
    mai=vet[0];
    men=vet[0];
    for (int i=1; i<TAM; i++)
            if (vet[i]>mai)
                    mai=vet[i];
    for (int i=1; i<TAM; i++)
            if (vet[i]<men)
                    men=vet[i];
    fatma=1;
    for (int i=1; i<=mai; i++)
                    fatma=fatma*i;
    fatme=1;
    for (int i=1; i<=men; i++)
                    fatme=fatme*i;
    cout << "\nFatorial do maior: " << fatma;
    cout << "\nFatorial do menor: " << fatme;

    return 0;
}

