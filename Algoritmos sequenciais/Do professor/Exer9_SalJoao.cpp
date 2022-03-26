//9. João reccebeu seusalário S1(em reais)e precisa pagar duas contas(C1eC2) que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João.

#include <iostream>
using namespace std;

int main(){

    float S1, C1, C2, multa=2;
    cout << "Digite o valor do salário: ";
    cin >> S1;

    cout << "Digite o valor das duas contas: ";
    cin >> C1 >> C2;

    S1 = S1 - (C1 + multa / 100 * C1) - (C2 + multa / 100 * C2); //S1 = S1 - C1 * 1.02 - C2 * 1.02;
    cout << S1;

    return 0;
}

