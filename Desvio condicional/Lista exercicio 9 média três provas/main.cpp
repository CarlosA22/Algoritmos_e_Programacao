#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float m1,m2,m3,ma;


    cout << "Digite as tr�s m�dias: ";
    cin  >> m1 >> m2 >> m3;

    ma = (m1 + m2 + m3 / 3);

    if (ma >= 6){
        cout << "Aluno aprovado com a m�dia: " << ma;
    } else {
        cout << "Aluno reprovado com a m�dia: " << ma;
    }

    return 0;
}
