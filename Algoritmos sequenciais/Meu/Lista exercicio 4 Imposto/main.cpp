#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");

 float valorproduto,valorfinal;

cout << "Insira o valor do produto: ";
cin  >> valorproduto;
valorfinal = valorproduto + valorproduto * 0.15;


cout <<  "O valor do produto com 15% de imposto é = " << valorfinal;


    return 0;
}
