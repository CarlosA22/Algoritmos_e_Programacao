//2.	Faça um programa que exiba na tela a tabuada do número 5 no seguinte formato: 5X1=5; 5X2=10; 5X3=15; ... ; 5X10=50.

#include <iostream>
using namespace std;

int main() {

    int operando=1, calculo;

    while (operando <= 10){
            calculo = 5 * operando;
            cout << "\n5 x " << operando << " = " << calculo;
            operando++;
    }

    return 0;
}

