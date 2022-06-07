//6.	Faça um programa que solicita ao usuário dois valores inteiros e positivos que serão a base e o expoente. O programa deve usar laço de repetição para calcular e escrever o resultado da base elevado ao expoente (potencia).

#include <iostream>
using namespace std;

int main() {
    int base, exp, pot;

    cout << "Digite os valores da base e expoente: ";
    cin >> base >> exp;

    pot = base;
    if (exp == 0)
        pot =1;

    int i=1;
    while (i<exp){
        pot = base * pot;
        i++;
    }
    cout << pot;

    return 0;
}

