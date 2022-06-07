//11.	Faça um programa que solicita ao usuário o valor de N e calcule o valor de S na série S = 1/1 + 1/2 + 1/3 + ... + 1/N. Ao fim exiba o número real resultante da série.

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int N;
    float S=0;

    cout << "Digite um valor para N: ";
    cin >> N;

    int i;
    for(i=1; i <= N; i++){ //inicia em 1 para calcular a série corretamente
        S = S + 1.0/i;
    }
    cout << S << endl;

    return 0;
}

