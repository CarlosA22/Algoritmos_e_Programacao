#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float vpago,vproduto,troco;

    cout << "Insira o valor do produto: ";
    cin  >> vproduto;

    cout << "Insira o valor pago: ";
    cin  >> vpago;

    troco = (vpago - vproduto);
    cout << "O troco é: " << troco;

    return 0;
}