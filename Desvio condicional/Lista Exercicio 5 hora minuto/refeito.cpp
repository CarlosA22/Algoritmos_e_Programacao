#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int h,m;

    cout<<"Digite o hor�rio HH:MM: ";
    cin>>h>>m;

    if((h >= 24 || h < 0)&&(m >= 59 || m < 0)){
        cout<<"Hor�rio Incorreto!";
    }else{
        cout<<"Hor�rio Correto!";
    }

    return 0;
}