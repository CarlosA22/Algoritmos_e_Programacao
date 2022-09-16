#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int h,m;

    cout<<"Digite o horário HH:MM: ";
    cin>>h>>m;

    if((h >= 24 || h < 0)&&(m >= 59 || m < 0)){
        cout<<"Horário Incorreto!";
    }else{
        cout<<"Horário Correto!";
    }

    return 0;
}