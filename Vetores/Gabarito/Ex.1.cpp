//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1 - Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre a média, o menor e o maior valor contidos no vetor.//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 10

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM],mai,men,soma=0;
    float med;

    for (int i=0; i<TAM; i++){
        cout << "Digite um valor: ";
        cin >> vet[i];
    }
    mai=vet[0];
    men=vet[0];
    soma=vet[0];
    for (int i=1; i<TAM; i++){
            soma+=vet[i];
            if (vet[i] > mai){
                mai=vet[i];
            }else{
                if (vet[i] < men){
                    men=vet[i];
                }
            }
    }
    med = (float) soma/TAM; //(float) para garantir resultado como valor real
    cout << "\nA média é " << med << " o menor é " << men << " e o maior é " << mai;


    return 0;
}


