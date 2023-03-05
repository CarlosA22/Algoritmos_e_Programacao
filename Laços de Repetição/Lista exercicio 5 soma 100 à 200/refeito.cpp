#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num=100,soma=0;

    while(num <= 200){
        soma=soma+num;
        num++;
    }
    cout<<soma;

    return 0;
}