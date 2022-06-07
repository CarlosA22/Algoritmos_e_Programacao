#include <iostream>
#include <locale.h>

using namespace std;

#define VET 10

int main() {
     setlocale(LC_ALL,"Portuguese");

    int p=0;
    float vetores[VET],med;
    for (int i=0; i<10; i++) {
        cout << "Digite as notas: "<<endl;
        cin  >> vetores[i];
        med=med+vetores[i];
    }

    med=med/VET;
    cout << "\nA média é: " << med;
    cout << "\n\nAs notas acima da média calculada são";
    for (int i=0; i<10; i++){
        if(vetores[i]>med){
        p++;
        cout << "->" << vetores[i] << endl;
        }
    }
    cout << "Quantidade: " << p;
    }











