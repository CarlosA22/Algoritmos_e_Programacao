#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float distPerc,kmL,precoGas,gastoTotal;

    cout << "Digite a distância percorrida em KM:";
    cin  >> distPerc;
    cout << "Digite quantos KM/L o seu carro faz:";
    cin  >> kmL;
    cout << "Digite o preço atual da gasolina:";
    cin  >> precoGas;

    gastoTotal = distPerc * precoGas / kmL;

    cout << "Você gastará: " << gastoTotal;


    return 0;
}
