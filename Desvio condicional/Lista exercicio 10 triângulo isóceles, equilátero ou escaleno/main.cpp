#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int L1,L2,L3;

    cout << "Digite os tr�s lados do tri�ngulo: ";
    cin  >> L1 >> L2 >> L3;

     if (L1 == L2 && L2 == L3){
        cout << "\n� um tri�ngulo equil�tero";
     } else if (L1 != L2 && L2 != L3 && L1 != L3){
        cout <<  "\n� um tri�ngulo escaleno";
     } else {
        cout << "\n� um tri�ngulo is�celes";
     }

    return 0;
}
