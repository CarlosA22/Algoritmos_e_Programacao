//Fa�a um programa que calcula os gastos com combust�vel em uma viagem.
////O programa deve solicitar ao usu�rio a dist�ncia a ser percorrida em Km, o consumo do carro em Km/litro e o pre�o do litro do combust�vel.
////Como resposta o programa dever� informar qual o valor em R$ a ser gasto com combust�vel na viagem.

#include <iostream>
using namespace std;

int main()
{
    float distancia, consumo, preco, val_gasto;
    cout << "Digite a dist�ncia, consumo e pre�o: ";
    cin >> distancia >> consumo >> preco;
    val_gasto = distancia / consumo * preco;
    cout << val_gasto;

    return 0;
}

