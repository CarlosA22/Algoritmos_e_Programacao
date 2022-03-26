//Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

#include <iostream>
using namespace std;
int main()
{
    int qtd_cavalos, qtd_ferraduras;
    cout << "Digite a quantidade de cavalos";
    cin >> qtd_cavalos;
    qtd_ferraduras = qtd_cavalos * 4;
    cout << qtd_ferraduras;
    return 0;
}

