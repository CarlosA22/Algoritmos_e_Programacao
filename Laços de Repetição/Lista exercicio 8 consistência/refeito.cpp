#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num;

    do{
        cout<<"Digite um n�mero real inteiro ";
        cin>>num;

        if(num < 0){
            cout<<"N�mero inv�lido "<<endl;
        }
    }while(num < 0);
    cout<<"N�mero valido.";

    return 0;
}