//15.	Fa�a um programa que solicita 20 valores inteiros e exiba quantos s�o pares e quantos s�o �mpares.

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, par=0, impar=0;

    int i;
    for(i=1; i <= 20; i++){ //n�mero de valores
        cout << "Digite o " << i << "o. numero: ";
        cin >> numero;
        if (numero % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    cout << "\nO total de n�meros pares foi de: " << par;
    cout << "\nO total de n�meros �mpares foi de: " << impar;

    return 0;
}

