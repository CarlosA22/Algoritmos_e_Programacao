#include <iostream>
#include <locale.h>

using namespace std;

int main(){
 setlocale(LC_ALL,"Portuguese");

 float Prova1,Prova2,Prova3,Resultado;

 cout << "Digite a nota da primeira prova (Peso 2)";
 cin  >> Prova1;
 cout << "Digite a nota da segunda prova (Peso 4)";
 cin  >> Prova2;
 cout << "Digite a nota da terceira prova (Peso 6)";
 cin  >> Prova3;

       Resultado = (Prova1 *2 + Prova2 *4 + Prova3 *6) / 12;

       cout << "A sua média é: " << Resultado;


    return 0;
}
