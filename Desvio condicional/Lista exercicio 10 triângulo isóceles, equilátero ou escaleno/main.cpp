#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int L1,L2,L3;

    cout << "Digite os três lados do triângulo: ";
    cin  >> L1 >> L2 >> L3;

     if (L1 == L2 && L2 == L3){
        cout << "\nÉ um triângulo equilátero";
     } else if (L1 != L2 && L2 != L3 && L1 != L3){
        cout <<  "\nÉ um triângulo escaleno";
     } else {
        cout << "\nÉ um triângulo isóceles";
     }

    return 0;
}
