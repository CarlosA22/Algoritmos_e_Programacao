#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float sal,C1,C2,restante;

    cout << "Insira o seu salário em R$: ";
    cin  >> sal;
    cout << "Insira a primeira conta atrasada (2% de juros): ";
    cin  >> C1;
    cout << "Insira a segunda conta atrasada (2% de juros): ";
    cin  >> C2;

    restante = sal - (C1 + C1 * 0.2) - (C2 + C2 * 0.2);

    cout << "Restam R$: " << restante << " do seu salário";



    return 0;
}
