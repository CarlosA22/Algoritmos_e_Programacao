#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");

    int varA,varB,var1,var2;

    cout << "Digite 1 n�mero inteiro A:";
    cin  >> varA;
    cout << "Digite um n�mero inteiro B:";
    cin  >> varB;

    var1 = varB;
    var2 = varA;

    cout << "\nO valor de A trocado � = " << var1;
    cout << "\nO valor de B trocado � = " << var2;



    return 0;
}
