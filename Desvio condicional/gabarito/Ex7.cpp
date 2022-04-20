/*
7.	Faça um programa que solicita um número inteiro e exibe uma mensagem indicando se ele é positivo, negativo ou zero. Saídas:
•	Pedido ao usuário = "Digite um número inteiro:";
•	Caso ele seja positivo = “Ele é positivo”;
•	Caso ele seja negativo = “Ele é negativo”;
•	Caso ele seja igual a zero = “Ele é igual a zero”.
*/

#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Digite um número inteiro: ";
	cin >> numero;

    if(numero != 0){
        if(numero > 0){
            cout << "Ele é positivo";
        } else {
            cout << "Ele é negativo";
        }
    } else {
        cout << "Ele é igual a zero";
    }
}

