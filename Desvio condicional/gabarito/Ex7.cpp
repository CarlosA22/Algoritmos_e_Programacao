/*
7.	Fa�a um programa que solicita um n�mero inteiro e exibe uma mensagem indicando se ele � positivo, negativo ou zero. Sa�das:
�	Pedido ao usu�rio = "Digite um n�mero inteiro:";
�	Caso ele seja positivo = �Ele � positivo�;
�	Caso ele seja negativo = �Ele � negativo�;
�	Caso ele seja igual a zero = �Ele � igual a zero�.
*/

#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Digite um n�mero inteiro: ";
	cin >> numero;

    if(numero != 0){
        if(numero > 0){
            cout << "Ele � positivo";
        } else {
            cout << "Ele � negativo";
        }
    } else {
        cout << "Ele � igual a zero";
    }
}

