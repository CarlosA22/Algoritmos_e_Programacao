//15.	Faça um programa que solicita 20 valores inteiros e exiba quantos são pares e quantos são ímpares.

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, par=0, impar=0;

    int i;
    for(i=1; i <= 20; i++){ //número de valores
        cout << "Digite o " << i << "o. numero: ";
        cin >> numero;
        if (numero % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    cout << "\nO total de números pares foi de: " << par;
    cout << "\nO total de números ímpares foi de: " << impar;

    return 0;
}

