#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    do {
        cout << "Digite um n�mero real e positivo qualquer: ";
        cin  >> num;

        if (num < 0) {
            cout << "N�mero Inv�lido\n";
        }

    } while (num < 0);

      cout << "N�mero v�lido";


    return 0;
}
