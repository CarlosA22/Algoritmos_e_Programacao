#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int base,exp,pot;

    cout<<"Digite um número base: ";
    cin>>base;

    cout<<"Digite um expoente para a base: ";
    cin>>exp;

    pot = base;
    if (exp == 0)
        pot = 1;

    int i=1;

    while(i<exp){
        pot = base * exp;
        i++;
    }
    
    cout<<pot;

    return 0;
}

