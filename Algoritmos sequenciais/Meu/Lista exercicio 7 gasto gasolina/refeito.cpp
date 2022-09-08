#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float kmp,kml,pg,pf;

    cout<<"Digite a distância me KM a ser percorrido: ";
    cin>>kmp;

    cout<<"Digite o preço quantos KM/L o veiculo faz: ";
    cin>>kml;

    cout<<"Digite o preço do litro: ";
    cin>>pg;

    pf=(kmp/kml*pg);

    cout<<"Total: "<<pf<<" R$";
    
    return 0;
}