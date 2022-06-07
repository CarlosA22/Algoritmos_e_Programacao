
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8-Leia 30 valores e jogue os pares em um vetor e os �mpares em outro. Ap�s a leitura calcule o somat�rio dos dois vetores e exiba o de maior valor.//
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
        cout << "Digite um n�mero: ";
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

    cout << "\nSomat�rio do vetor par: " << somapar << endl;
    cout << "\nSomat�rio do vetor �mpar: " << somaimpar << endl;

    cout << "\nValores do vetor de maior valor:\n";
    for (int i=0; i<TAM; i++){
        if (somapar > somaimpar)
            cout << "| " << par[i] << " | \n";
        else
            cout << "| " << impar[i] << " | \n";
    }

    return 0;
}

