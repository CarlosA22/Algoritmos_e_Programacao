
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//10-Construa um algoritmo que solicite 5 valores ao usu�rio, armazene estes em um vetor de 5 posi��es inteiras. Ap�s verifique se o n�mero 7 se encontra no vetor. Em caso positivo, exiba qual a posi��o em que ele foi encontrado. Se ele for encontrado mais de uma vez tamb�m quantas vezes ele foi encontrado.////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 5

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vet[TAM],b[TAM], qtd=0;
    cout << "Preencha o vetor...\n";
    for (int i=0; i<TAM; i++){
        cout << "Digite um n�mero: ";
        cin >> vet[i];
    }
    cout << "\nResultado: \n";
    for (int i=0; i<TAM; i++){
        if (vet[i]==7){
            qtd++;
            cout << "| " <<  vet[i] << " | " << "->valor encontrado na posi��o " << i << " pela " << qtd << "a vez\n";
        }else{
            cout << "| " <<  vet[i] << " |\n";
        }
    }
    return 0;
}

