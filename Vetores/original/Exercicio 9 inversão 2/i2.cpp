#include <iostream>
#include <locale.h>

using namespace std;

#define VET 8

int main() {
    setlocale(LC_ALL, "Portuguese");

    int A[VET],B[VET],T;

    for (int i=0; i<VET; i++){
        cout << "Digite o valor do vetor A: ";
        cin  >> A[i];
        }
    

    for (int i=0; i<VET; i++){
        cout << "Digite o valor do vetor B: ";
        cin  >> B[i];
        }

   //Troca dos vetores

    for (int i=0; i<VET; i++){
        T=A[i];
        A[i]=B[i];
        B[i]=T; 
        }
    
    cout << "Resultado do vetor A: " << endl;
    for (int i=0; i<VET; i++){
        cout << "| " << A[i] << " | \n";
    }
    
    cout << "Resultado do vetor B: " << endl;
    for (int i=0; i<VET; i++){
        cout << "| " << B[i] << " | \n";
    }

    
    return 0;
}