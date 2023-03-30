#include <locale.h>
#include<iostream>
using namespace std;

int main(){
    int operando1 =1, operando2, calculo;
    while (operando1<=10){ //esse laço roda uma vez
        operando2 = 1;
        while (operando2 <= 11){ // esse roda 10 vezes dai o laço exterior roda mais uma vez até 10
            calculo = operando1 * operando2;
            cout<<endl<<operando1<<" * "<<operando2<<" = "<<calculo;
            operando2++;
        }
        operando1++;
        cout<<endl<<endl;
        }

    return 0;

    }
