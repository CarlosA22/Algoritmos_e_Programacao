#include <iostream>
#include <locale.h>

using namespace std;

#define VET 10

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int v[VET];

    for (int i=0; i<VET; i++){
        cout << "Insira 10 vetores:" << endl;
        cin  >> v[i]; }

    cout <<"Inverso: " << endl;

    for (int i=VET-1; i>=0; i--){
        cout << v[i] << "\t"; }

    return 0;
}