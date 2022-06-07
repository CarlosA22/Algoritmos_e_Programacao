#include <iostream>
#include <locale.h>

using namespace std;

#define VET 10

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetores[VET],mai,men,soma = 0;
    float med;

    for (int i=0; i<10; i++) {
         cout << "Digite o valor do vetor "<<i;
         cin  >> vetores [i];

    }
    mai=vetores[0];
    men=vetores[0];
    soma=vetores[0];
         for (int i=1; i<VET; i++){
            soma+=vetores[i];
            if (vetores[i]>mai){
                mai=vetores[i];
            }else{
                if (vetores[i]<men){
                     men=vetores[i];
                }
         }

    }
    med = (float) soma/VET;
    cout << "\nA média é " << med << "o menor é " << men << "o maior é " << mai;
    
     return 0;
}