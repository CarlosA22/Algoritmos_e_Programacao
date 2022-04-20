#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vi;
    cout <<"Digite um número inteiro: " ;
    cin  >> vi;

    if (vi %2==0){
    cout <<"O número: "<< vi << " É par";
    }
    else{
        cout <<"O número: "<< vi <<" É impar";
    }

    return 0;
}
