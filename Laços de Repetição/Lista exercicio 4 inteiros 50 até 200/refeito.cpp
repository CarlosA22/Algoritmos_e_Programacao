#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num=50;

    while(num <= 200){
        cout<<num<<endl;
        num++;
    }

    return 0;
}