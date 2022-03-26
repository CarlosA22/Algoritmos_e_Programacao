//Faça um programa que solicita ao usuário um número real e exibe na tela a metade do número digitado

#include <iostream>
using namespace std;

int main()
{
    float valor_digitado;
    cout<<"Digite um valor: ”;
    cin >> valor_digitado;
    valor_digitado = valor_digitado/2;
    cout << valor_digitado;

    return 0;
}

