/*
1.	Fa�a um programa que solicita ao usu�rio um n�mero inteiro e exibe este na tela. Se o n�mero for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
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

