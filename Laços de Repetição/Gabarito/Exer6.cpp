//6.	Fa�a um programa que solicita ao usu�rio dois valores inteiros e positivos que ser�o a base e o expoente. O programa deve usar la�o de repeti��o para calcular e escrever o resultado da base elevado ao expoente (potencia).

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

