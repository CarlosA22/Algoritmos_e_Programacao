//9. Jo�o reccebeu seusal�rio S1(em reais)e precisa pagar duas contas(C1eC2) que est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o.

#include <iostream>
using namespace std;

int main(){

    float S1, C1, C2, multa=2;
    cout << "Digite o valor do sal�rio: ";
    cin >> S1;

    cout << "Digite o valor das duas contas: ";
    cin >> C1 >> C2;

    S1 = S1 - (C1 + multa / 100 * C1) - (C2 + multa / 100 * C2); //S1 = S1 - C1 * 1.02 - C2 * 1.02;
    cout << S1;

    return 0;
}

