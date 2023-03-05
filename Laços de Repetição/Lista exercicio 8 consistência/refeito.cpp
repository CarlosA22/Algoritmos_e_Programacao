#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    do{
        cout<<"Digite um número real inteiro ";
        cin>>num;

        if(num < 0){
            cout<<"Número inválido "<<endl;
        }
    }while(num < 0);
    cout<<"Número valido.";

    return 0;
}