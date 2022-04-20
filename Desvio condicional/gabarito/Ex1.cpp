/*
1.	Faça um programa que solicita ao usuário um número inteiro e exibe este na tela. Se o número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
*/

#include <iostream>
using namespace std;
int main()
{
	int numero;

	cout << "Digite um numero: ";
	cin >> numero;

	if(numero < 0){
        numero = numero * -1;
	}

    cout << "\nResultado: "<< numero;

	return 0;
}

