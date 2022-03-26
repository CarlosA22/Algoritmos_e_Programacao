//Faça um programa que calcula os gastos com combustível em uma viagem.
////O programa deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do carro em Km/litro e o preço do litro do combustível.
////Como resposta o programa deverá informar qual o valor em R$ a ser gasto com combustível na viagem.

#include <iostream>
using namespace std;

int main()
{
    float distancia, consumo, preco, val_gasto;
    cout << "Digite a distância, consumo e preço: ";
    cin >> distancia >> consumo >> preco;
    val_gasto = distancia / consumo * preco;
    cout << val_gasto;

    return 0;
}

