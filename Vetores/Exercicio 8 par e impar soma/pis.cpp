#include <iostream>
#include <locale.h>

using namespace std;

#define VET 30 //define a quantidade de algarismos dentro dos vetores

int main() {
    setlocale(LC_ALL, "Portuguese");

    int imp[VET], p[VET], somai=0, somap=0, ori[VET];

    for (int i=0; i<VET; i++){
        cout << "Digite um número: ";
        cin  >> ori[i];

        p[i]=0;
        imp[i]=0;

        if (ori[i] % 2 == 0)
            p[i]=ori[i];
        else
            imp[i]=ori[i];
        
        somap += p[i];
        somai += imp[i];
    }

    cout << "\n Somatório do vetor par é: " << somap << endl;
    cout << "\n Somatório do vetor impar é: " << somai << endl;

    cout << "\nValores do vetor de maior valor:\n";
    for (int i=0; i<VET; i++){
       if (somap > somai)
            cout << "| " << p[i] << " | \n";
        else
            cout << "| " << imp[i] << " | \n";
    }

    return 0;
}