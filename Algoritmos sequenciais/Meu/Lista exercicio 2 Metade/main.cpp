#include <iostream>
#include <locale.h> // para colocar linguagem em pt-br para usar acento nas letras

using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");

 float valorreal,metade;

 cout << "Digite um valor n�mero real: " ;
    cin  >> valorreal;
    metade = valorreal / 2 ;

    cout << "A metade deste valor � = " << metade;

    return 0;
}
