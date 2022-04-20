#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int inteiro;

    cout << "Este programa ira mostrar o número inteiro que você digitar, porém se você digitar um número negativo ele será transformado em um número positivo. " << endl;
    cout << "Digite um número inteiro: ";
    cin  >> inteiro;

    if (inteiro >=0) {
        cout << "O número que você digitou é: "<<inteiro;

    } else {
     inteiro = inteiro * -1 ;
     cout << inteiro; };

    return 0;
}
