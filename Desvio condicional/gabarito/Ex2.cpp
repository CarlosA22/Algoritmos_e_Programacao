/*
2.	Faça um programa que solicita ao usuário um valor inteiro e exibe uma mensagem informando se o número é par ou ímpar. Saídas:
•	Pedido ao usuário = "Entre com um numero inteiro:";
•	Caso verdadeiro = “O número é par”;
•	Caso falso = “O número é ímpar”.
*/

#include <iostream>
using namespace std;

int main()
{
	int numero;

	cout << "Digite um numero: ";
	cin >> numero;

	if(numero % 2 == 0){
        cout << "\nO número é par";
	}else{
        cout << "\nO número é ímpar";
	}

	return 0;
}

