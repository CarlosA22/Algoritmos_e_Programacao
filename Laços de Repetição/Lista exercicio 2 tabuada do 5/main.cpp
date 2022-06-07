#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tabuada = 5, num = 1;


    while(tabuada = 5, num < 11){
        tabuada = tabuada * num;
        cout <<tabuada<<endl;
        num++;
    }


    return 0;
}
