#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Digite um n�mero inteiro: ";
    cin  >> n;

    if (n > 0 ){
        cout << "O n�mero: " << n << " � positivo";
    } else if (n < 0) {
        cout << "O n�mero: " << n << " � negativo";
    } else {
        cout << "O n�mero � igual a zero";
    }

    return 0;
}
