#include <iostream>

using namespace std;

int main()
{
    int numero, expoente, potencia;

    cout << "Digite um numero e em seguida um expoente;" << endl;
    cin  >> numero >> expoente;

    potencia = numero;
    if (expoente == 0)
        potencia = 1;
     // não precisa ter {}

    int i=1;

    while (i<expoente){
     potencia = numero * potencia;
     i++;
    }
    cout << potencia;

    return 0;
}
