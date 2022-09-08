#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"Portuguese");
    
    float nr,mnr;

    cout<<"Insira um número real: ";
    cin>>nr;

    mnr = (nr/2.0);

    cout<<"A metade é: " << mnr;

    return 0;
    }