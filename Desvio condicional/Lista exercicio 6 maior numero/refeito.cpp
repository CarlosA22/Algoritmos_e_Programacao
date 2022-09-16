#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portguese");

    int n1,n2;

    cout<<"Digite dois números inteiros: ";
    cin>>n1>>n2;

    if(n1 > n2){
        cout<<n1;
    }else if(n1 == n2){
        cout<<"Os números são iguais";
    }else{
        cout<<n2;
    }

    return 0;
}