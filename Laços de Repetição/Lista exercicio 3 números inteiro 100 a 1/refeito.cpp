#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num=100;

    while(num >= 1){
        cout<<num<<endl;
        num--;
    }

    return 0;
}