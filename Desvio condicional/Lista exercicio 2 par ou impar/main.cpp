#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vi;
    cout <<"Digite um n�mero inteiro: " ;
    cin  >> vi;

    if (vi %2==0){
    cout <<"O n�mero: "<< vi << " � par";
    }
    else{
        cout <<"O n�mero: "<< vi <<" � impar";
    }

    return 0;
}
