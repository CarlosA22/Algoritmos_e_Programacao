/*
8.	Fa�a um programa que solicita ao usu�rio um n�mero real positivo. Verifique se o n�mero � realmente positivo, e em caso contr�rio solicite ao usu�rio digitar novamente (este processo pode se repetir in�meras vezes e � chamado de consist�ncia, pois garante que o n�mero ser� v�lido ap�s a entrada de dados). Sa�das:
� Pedido ao usu�rio = �Digite um n�mero real positivo�;
� Caso n�mero valido = �O n�mero digitado � valido�;
� Caso n�mero invalido = �N�mero invalido, tente novamente�.
*/


#include <iostream>
using namespace std;

int main() {
    float numero;

    do{
        cout << "Digite um n�mero real positivo: ";
        cin >> numero;

        if (numero < 0){
            cout << "N�mero inv�lido, tente novamente\n";
        }
    }while (numero < 0);

    cout << "O n�mero digitado � v�lido";

    return 0;
}

