#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguse");

    float a,b,c;

    cout<<"Insira 3 valores para criar um tri�ngulo: ";
    cin>>a>>b>>c;

    if(a == b && b == c){
        cout<<"Tri�gulo equil�tero.";
    }else if(a == b && b != c && a != c || b == c && c != a && b != a){
        cout<<"Tri�ngulo Is�celes.";
    }else{
        cout<<"Tri�ngulo escaleno.";
    }

    return 0;
}