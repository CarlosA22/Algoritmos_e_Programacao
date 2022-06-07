//5.	Faça um programa que exiba na tela a soma dos números inteiros do intervalo [100, 200]. Exemplo: soma = 100 + 101 +102 + ... + 200.

#include <iostream>
using namespace std;

int main() {
    int numero=100, soma=0;
    while (numero<=200){
        soma = soma + numero;
        numero++;
    }
    cout << soma;

    return 0;
}


