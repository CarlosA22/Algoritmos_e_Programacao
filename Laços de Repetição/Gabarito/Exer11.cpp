//11.	Fa�a um programa que solicita ao usu�rio o valor de N e calcule o valor de S na s�rie S = 1/1 + 1/2 + 1/3 + ... + 1/N. Ao fim exiba o n�mero real resultante da s�rie.

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
    for(i=1; i <= N; i++){ //inicia em 1 para calcular a s�rie corretamente
        S = S + 1.0/i;
    }
    cout << S << endl;

    return 0;
}

