//14.	Faça um programa que solicita o peso de 25 pessoas e exibe qual o maior peso e qual o menor peso dentre os digitados.

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    float numero, maior, menor;

    int i;
    for(i=1; i <= 25; i++){ //número de pessoas
        cout << "Digite o " << i << "o. peso: ";
        cin >> numero;
        if (i==1){
            maior = numero;
            menor = numero;
        }
        if (numero > maior)
            maior = numero;
        if (numero < menor)
            menor = numero;
    }
    cout << "\nO maior peso digitado foi: " << maior;
    cout << "\nO menor peso digitado foi: " << menor;

    return 0;
}

