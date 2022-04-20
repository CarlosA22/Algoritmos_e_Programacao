/*
3.	Faça um programa que solicita ao usuário uma letra e verifique se ela é uma vogal ou não exibindo uma mensagem correspondente. Saídas
•	Pedido ao usuário= "Digite uma letra:";
•	Caso verdadeiro = “É uma vogal”;
•	Caso falso = “Não é uma vogal”.
*/

#include <iostream>
using namespace std;

int main()
{
	char letra;

	cout << "Digite uma letra: ";
	cin >> letra;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        cout << "É uma vogal";
	}else{
        cout << "Não é uma vogal";
	}
	return 0;
}

