#include <iostream>
#include <locale.h> // para colocar linguagem em pt-br para usar acento nas letras

using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");

    int valorpago,preco,troco;


    cout << "Digite o valor pago e o preço do produto: " ;
    cin  >> valorpago >> preco;
    troco = valorpago - preco;

    cout << "O troco é = " << troco;
    return 0;
}
