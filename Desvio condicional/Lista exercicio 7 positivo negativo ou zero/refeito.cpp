#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portguese");

    int n;

    cout<<"Digite um número inteiro: ";
    cin>>n;

    if(n > 0 ){
        cout<<"Número positivo";
    }else if (n < 0){
        cout<<"Número negativo";
    }else{
        cout<<"Zero";
    }

    return 0;
}