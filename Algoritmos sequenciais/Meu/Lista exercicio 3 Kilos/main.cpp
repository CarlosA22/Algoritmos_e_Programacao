#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");

float valorquilo,quantidadequilo,valorfinal;

cout << "Insira o valor do quilo do produto e a quantidade de quilos consumida:" ;
cin  >> valorquilo >> quantidadequilo;
valorfinal = valorquilo * quantidadequilo ;

cout << "O valor a ser pago é = " << valorfinal;


    return 0;
}
