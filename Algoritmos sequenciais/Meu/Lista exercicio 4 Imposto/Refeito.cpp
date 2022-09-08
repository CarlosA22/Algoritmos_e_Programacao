#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float p,pf;

    cout<<"Insira o valor do produto: ";
    cin>>p;

    pf=(p * 1.15);

    cout<<"O valor é: "<<pf;

    return 0;
}