#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1,n2,n3;

    cout << "Digite 3 n�meros: ";
    cin  >> n1 >> n2 >> n3;


    if (n1 > n2 && n1 > n3) {
        cout << "O maior n�mero �: " << n1;
    } else if (n2 >= n1 && n2 >= n3) {
        cout << "O maior n�mero �: " << n2;
    } else if (n3 >= n1 && n3 >= n2) {
        cout << "O maior n�mero �: " << n3;
    }


    return 0;
}
