#include <iostream> 
#include <locale.h>

using namespace std;

#define VET 20 //define os vetores


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float v1[VET],v2[VET],v3[VET]; 

    cout << "Vetor A" << endl;

    for (int i=0; i<VET; i++){
        cout << "Insira 20 algarismos: " << endl;
        cin  >> v1[i]; // pede para o usuario inserir os 20 vetores
        }

    cout << "Vetor B" << endl;

    for (int i=0; i<VET; i++){
        cout << "Insira 20 algarismos: " << endl;
        cin  >> v2[i]; // pede para o usuario inserir os 20 vetores
    }

    cout << "Resultado da subtração:" << endl;

    for (int i=0; i<VET; i++){
        v3[i] = v1[i] - v2[i];
        cout << v3[i] << "|";
    }   

    return 0;
}