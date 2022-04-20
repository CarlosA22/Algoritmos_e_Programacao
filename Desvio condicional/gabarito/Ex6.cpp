/*
6.	Faça um programa que exiba o maior dentre dois números reais digitados pelo usuário. Caso eles sejam iguais exiba uma mensagem correspondente. Saídas:
•	Pedido ao usuário = "Digite dois números reais:";
•	Caso eles sejam iguais = “Eles são iguais”.
•	Caso sejam diferentes exiba somente o numero desejado.
*/

#include <iostream>
using namespace std;

int main()
{
    float n1, n2;

    cout << "Digite dois números reais: ";
	cin >> n1 >> n2;

    if(n1 == n2){
        cout << "Eles são iguais";
    }else{
        if(n1 > n2){
            cout << n1 << " é maior";
        } else {
            cout << n2 << " é maior";
        }
    }
}

