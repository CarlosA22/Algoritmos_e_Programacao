#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguse");

    float a,b,c;

    cout<<"Insira 3 valores para criar um triângulo: ";
    cin>>a>>b>>c;

    if(a == b && b == c){
        cout<<"Triâgulo equilátero.";
    }else if(a == b && b != c && a != c || b == c && c != a && b != a){
        cout<<"Triângulo Isóceles.";
    }else{
        cout<<"Triângulo escaleno.";
    }

    return 0;
}