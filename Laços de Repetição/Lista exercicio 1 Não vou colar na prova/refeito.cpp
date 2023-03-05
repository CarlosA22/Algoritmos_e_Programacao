#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    int txt;
    
    txt=1;

    while(txt <= 30){
        cout<<"Não vou colar na prova"<<endl;
        txt++;
    }



    return 0;
}