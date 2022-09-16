#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int DiaN,MesN,AnoN,DiaA,MesA,AnoA;

    cout<<"Digite a sua data de nascimento DD/MM/AAAA: ";
    cin>>DiaN>>MesN>>AnoN;

    cout<<"Digite a data atual DD/MM/AAAA: ";
    cin>>DiaA>>MesA>>AnoA;
    
    if(MesN < MesA || MesN == MesA && DiaN <= DiaA){
        cout<<"A Idade é: "<<AnoA - AnoN; 
    }else{
        cout<<"A Idade é: "<<AnoA - AnoN -1;
    }

    return 0;
}