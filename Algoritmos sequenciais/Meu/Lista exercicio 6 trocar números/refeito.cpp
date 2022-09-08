#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    int A,B,temp;

    cout<<"Digite um número inteiro: ";
    cin>>A;

    cout<<"Digite outro número inteiro: ";
    cin>>B;

    temp=A;
    A=B;
    B=temp;

    cout<<"A= "<<A<<"\n"<<"B= "<<B;

    return 0;
}