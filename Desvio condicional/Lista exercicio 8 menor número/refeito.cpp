#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portguese");

    float n1,n2,n3;

    cout<<"Digite 3 números reais: ";
    cin>>n1>>n2>>n3;

    if (n1 > n2 && n1 > n3){
        cout<<n1;
    }else if(n2 > n1 && n2 > n3){
        cout<<n2;
    }else if(n3 > n1 && n3 > n2){
        cout<<n3;
    }else{
        cout<<n3;
    }

    return 0;
}

