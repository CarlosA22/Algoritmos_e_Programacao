#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Digite um número inteiro: ";
    cin  >> n;

    if (n > 0 ){
        cout << "O número: " << n << " é positivo";
    } else if (n < 0) {
        cout << "O número: " << n << " é negativo";
    } else {
        cout << "O número é igual a zero";
    }

    return 0;
}
