/*
2.	Fa�a um programa que solicita ao usu�rio um valor inteiro e exibe uma mensagem informando se o n�mero � par ou �mpar. Sa�das:
�	Pedido ao usu�rio = "Entre com um numero inteiro:";
�	Caso verdadeiro = �O n�mero � par�;
�	Caso falso = �O n�mero � �mpar�.
*/

#include <iostream>
using namespace std;

int main()
{
	int numero;

	cout << "Digite um numero: ";
	cin >> numero;

	if(numero % 2 == 0){
        cout << "\nO n�mero � par";
	}else{
        cout << "\nO n�mero � �mpar";
	}

	return 0;
}

