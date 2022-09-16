#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portguese");

    char nome[30];
    float n1,n2,n3,m;

    cout<<"Insira o seu nome: ";
    cin>>nome;

    cout<<"Insira as suas 3 notas: ";
    cin>>n1>>n2>>n3;

    m = (n1 + n2 + n3)/3;

    if(m >= 6){
        cout<<"Você foi aprovado com a média: "<<m;
    }else{
        cout<<"Você foi reprovado com a média: "<<m;
    }

    return 0;
}