#include <iostream>
#include <locale.h>

using namespace std;



int main(){
    setlocale(LC_ALL,"Portuguese");

    float vpb,poup,pao,broa,ppao,pbroa;

    ppao = 0,12;
    pbroa = 1,50;

    cout<<"\nQnt de pães vendidos\n";
    cin>>pao;

    cout<<"\nQnt de broas vendidas\n";
    cin>>broa;

    vpb=(ppao*pao)+(pbroa*broa);

    poup=(vpb*0,10);

    cout<<"\nVocê arrecadou\n"<<vpb<<" Reais";
    cout<<poup<<" Devem ser depositados na poupança";

    return 0;
}