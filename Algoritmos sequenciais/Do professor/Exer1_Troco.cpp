//Faça um programa que receba um valor que é o valor pago, um segundo valor que é o preço do produto e retorne o troco a ser dado.

#include <iostream>
using namespace std;

int main()
{
    float valor_pago, preco_produto, troco;
    cout << "Digite o valor produto";
    cin >> preco_produto;
    cout << "Digite o valor pago";
    cin >> valor_pago;
    troco = valor_pago - preco_produto;
    cout << troco;

    return 0;
}

