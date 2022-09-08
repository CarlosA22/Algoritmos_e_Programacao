#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float s1,c1,c2,sf;

    cout<<"Insira o valor do salário de João: ";
    cin>>s1;

    cout<<"Insira o valor da conta atrasada de João (2% de juros)";
    cin>>c1;

    cout<<"Insira o valor da segunda conta atrasada de João (2% de juros)";
    cin>>c2;

    sf=(s1 - (c1 * 1.02) - (c2 * 1.02));
    
    cout<<"O salário restante é: "<<sf;

    return 0;
}