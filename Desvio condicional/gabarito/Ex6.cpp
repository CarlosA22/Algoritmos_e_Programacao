/*
6.	Fa�a um programa que exiba o maior dentre dois n�meros reais digitados pelo usu�rio. Caso eles sejam iguais exiba uma mensagem correspondente. Sa�das:
�	Pedido ao usu�rio = "Digite dois n�meros reais:";
�	Caso eles sejam iguais = �Eles s�o iguais�.
�	Caso sejam diferentes exiba somente o numero desejado.
*/

#include <iostream>
using namespace std;

int main()
{
    float n1, n2;

    cout << "Digite dois n�meros reais: ";
	cin >> n1 >> n2;

    if(n1 == n2){
        cout << "Eles s�o iguais";
    }else{
        if(n1 > n2){
            cout << n1 << " � maior";
        } else {
            cout << n2 << " � maior";
        }
    }
}

