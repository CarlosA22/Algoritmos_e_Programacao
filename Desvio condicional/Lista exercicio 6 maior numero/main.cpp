#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1,n2;

    cout << "Digite dois números inteiros: ";
    cin  >> n1 >> n2;

    if       (n1 >= n2) {
        cout << n1;
    }
    else if  (n2 >= n1) {
        cout << n2;

    }

    return 0;
}
