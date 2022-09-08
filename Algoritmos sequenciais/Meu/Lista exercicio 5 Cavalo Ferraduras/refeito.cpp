#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    int c,f;

    cout<<"Digite a quantidade de cavalos: ";
    cin>>c;

    f = (c*4);

    cout<<"São necessárias: "<<f<<" ferraduras.";
    
    return 0;
}