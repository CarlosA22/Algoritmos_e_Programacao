#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int   num = 0, media = 0, quantCont = 0;
    float resultado = 0;


    do  {
        cout << "Digite um n�mero indetermiando de n�meros";
        cin  >> num;

        if (num % 2 == 0 && num !=0){
                media += num; //media = media + num
                quantCont++;
        }

    } while (num != 0);

        if (quantCont != 0) {
        resultado = media / quantCont;
        cout << "M�dia: " << resultado << endl;
    }

    return 0;
}
