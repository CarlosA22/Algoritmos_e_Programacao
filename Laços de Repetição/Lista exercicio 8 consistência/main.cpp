#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    do {
        cout << "Digite um número real e positivo qualquer: ";
        cin  >> num;

        if (num < 0) {
            cout << "Número Inválido\n";
        }

    } while (num < 0);

      cout << "Número válido";


    return 0;
}
