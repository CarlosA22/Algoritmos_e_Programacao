#include <iostream>
#include <locale.h> // para colocar linguagem em pt-br para usar acento nas letras

using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");

    int valorpago,preco,troco;


    cout << "Digite o valor pago e o pre�o do produto: " ;
    cin  >> valorpago >> preco;
    troco = valorpago - preco;

    cout << "O troco � = " << troco;
    return 0;
}
