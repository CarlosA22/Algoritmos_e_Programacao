//16.	Solicite ao usu�rio a digita��o de um n�mero inteiro, calcule e exiba o fatorial deste n�mero

#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero, fatorial;

    cout << "Digite um n�mero: ";
    cin >> numero;


    int i;
    for(fatorial=1; numero > 1; numero--){
        fatorial = fatorial * numero;
    }
    cout << "O fatorial do n�mero digitado � :" << fatorial;

    return 0;
}

