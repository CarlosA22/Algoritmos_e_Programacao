#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"Portuguese");

    int num;

    cout<<"Insira um número inteiro: ";
    cin>>num;

    if(num > 0){
        cout<<num;
    }else{
        num=(num*-1);
        cout<<num;
    }

    return 0;
}