/*
3.	Fa�a um programa que solicita ao usu�rio uma letra e verifique se ela � uma vogal ou n�o exibindo uma mensagem correspondente. Sa�das
�	Pedido ao usu�rio= "Digite uma letra:";
�	Caso verdadeiro = �� uma vogal�;
�	Caso falso = �N�o � uma vogal�.
*/

#include <iostream>
using namespace std;

int main()
{
	char letra;

	cout << "Digite uma letra: ";
	cin >> letra;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        cout << "� uma vogal";
	}else{
        cout << "N�o � uma vogal";
	}
	return 0;
}

