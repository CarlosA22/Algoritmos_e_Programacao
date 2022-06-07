//16.	Solicite ao usuário a digitação de um número inteiro, calcule e exiba o fatorial deste número

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, fatorial;

    cout << "Digite um número: ";
    cin >> numero;


    int i;
    for(fatorial=1; numero > 1; numero--){
        fatorial = fatorial * numero;
    }
    cout << "O fatorial do número digitado é :" << fatorial;

    return 0;
}

