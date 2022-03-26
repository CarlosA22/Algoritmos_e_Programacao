#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");

    int varA,varB,var1,var2;

    cout << "Digite 1 número inteiro A:";
    cin  >> varA;
    cout << "Digite um número inteiro B:";
    cin  >> varB;

    var1 = varB;
    var2 = varA;

    cout << "\nO valor de A trocado é = " << var1;
    cout << "\nO valor de B trocado é = " << var2;



    return 0;
}
