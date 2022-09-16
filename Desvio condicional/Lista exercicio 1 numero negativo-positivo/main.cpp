#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int inteiro;

    cout << "Este programa ira mostrar o n�mero inteiro que voc� digitar, por�m se voc� digitar um n�mero negativo ele ser� transformado em um n�mero positivo. " << endl;
    cout << "Digite um n�mero inteiro: ";
    cin  >> inteiro;

    if (inteiro >=0) {
        cout << "O n�mero que voc� digitou �: "<<inteiro;

    } else {
     inteiro = inteiro * -1 ;
     cout << inteiro; };

    return 0;
}