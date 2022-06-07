//12.	Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de pessoas que possui idade maior ou igual a 18 anos.

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int idade, cont=0;

    int i;
    for(i=1; i <= 10; i++){ //10 pessoas
        cout << "Digite a idade da " << i << "o. pessoa: ";
        cin >> idade;

        if (idade >= 18)
            cont++;
    }
    cout << "A quantidade de pessoas maiores de 18 anos é de " << cont;

    return 0;
}

