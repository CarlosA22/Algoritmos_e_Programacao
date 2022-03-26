#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");

 int QuantidadeCavalos,QuantidadeFerraduras;

    cout << "Digite a quantidade de cavalos:";
    cin  >> QuantidadeCavalos;
    QuantidadeFerraduras = QuantidadeCavalos * 4;

    cout << "A quantidade de ferraduras necessárias é = " << QuantidadeFerraduras;


    return 0;
}
