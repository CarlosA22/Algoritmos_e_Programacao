#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float distPerc,kmL,precoGas,gastoTotal;

    cout << "Digite a dist�ncia percorrida em KM:";
    cin  >> distPerc;
    cout << "Digite quantos KM/L o seu carro faz:";
    cin  >> kmL;
    cout << "Digite o pre�o atual da gasolina:";
    cin  >> precoGas;

    gastoTotal = distPerc * precoGas / kmL;

    cout << "Voc� gastar�: " << gastoTotal;


    return 0;
}
