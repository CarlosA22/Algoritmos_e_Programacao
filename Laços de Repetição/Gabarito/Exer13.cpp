//13.	Faça um algoritmo que leia um conjunto de 20 números inteiros e indique, ao final, qual foi o menor valor digitado.

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, menor;

    int i;
    for(i=1; i <= 20; i++){
        cout << "Digite o " << i << "o. numero: ";
        cin >> numero;
        if (i == 1)
            menor = numero;

        if (numero < menor)
            menor = numero;
    }
    cout << "\nO menor número digitado foi: " << menor;

    return 0;
}

