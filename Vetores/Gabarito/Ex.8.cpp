
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8-Leia 30 valores e jogue os pares em um vetor e os ímpares em outro. Após a leitura calcule o somatório dos dois vetores e exiba o de maior valor.//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 30

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int ori[TAM],par[TAM],impar[TAM],somapar=0,somaimpar=0;
    cout << "Preencha o vetor:\n\n";
    for (int i=0; i<TAM; i++){
        cout << "Digite um número: ";
        cin >> ori[i];

        par[i]=0;
        impar[i]=0;

        if (ori[i] % 2 == 0)
            par[i]=ori[i];
        else
            impar[i]=ori[i];

        somapar += par[i];
        somaimpar += impar[i];
    }

    cout << "\nSomatório do vetor par: " << somapar << endl;
    cout << "\nSomatório do vetor ímpar: " << somaimpar << endl;

    cout << "\nValores do vetor de maior valor:\n";
    for (int i=0; i<TAM; i++){
        if (somapar > somaimpar)
            cout << "| " << par[i] << " | \n";
        else
            cout << "| " << impar[i] << " | \n";
    }

    return 0;
}

