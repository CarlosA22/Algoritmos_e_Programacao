#include <iostream>
#include <locale.h>

using namespace std;

#define VET 5

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a[VET],qnt=0;

    for (int i=0; i<VET; i++){
        cout << "Insira os vetores: ";
        cin  >> a[i];
    }

    for (int i=0; i<VET; i++){
        qnt++;
        if (a[i] == 7){
            cout << "| " << a[i] << " | " << "O valor 7 se encontra nos vetores: "<< i <<  " o valor se repete: " << qnt << " Vezes" << endl;
        }else{
            cout << "| " << a[i] << " |\n";

        }
    }

    return 0;
}