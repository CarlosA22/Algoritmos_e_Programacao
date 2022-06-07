#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int texto = 1;

    while (texto <= 30) {
        cout << "Não vou colar na prova" << endl;
    texto = texto + 1;
    }

    return 0;
}
