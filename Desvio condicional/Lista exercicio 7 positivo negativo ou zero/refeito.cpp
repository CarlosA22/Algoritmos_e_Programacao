#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portguese");

    int n;

    cout<<"Digite um n�mero inteiro: ";
    cin>>n;

    if(n > 0 ){
        cout<<"N�mero positivo";
    }else if (n < 0){
        cout<<"N�mero negativo";
    }else{
        cout<<"Zero";
    }

    return 0;
}