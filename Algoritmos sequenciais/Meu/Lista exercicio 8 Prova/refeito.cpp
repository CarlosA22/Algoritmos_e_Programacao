#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float p1,p2,p3,mf;

    cout<<"Insira a nota da primeira prova (peso 2): ";
    cin>>p1;

    cout<<"Insira a nota da segunda prova (peso 4): ";
    cin>>p2;

    cout<<"Insira a nota da terceira prova (peso 6): ";
    cin>>p3;

    mf=(p1 * 2 + p2 * 4 + p3 * 6) / 12;

    cout<<"A média é: "<<mf;

    return 0;
}