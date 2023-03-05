#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tb,op=1;


    while(op <= 10){
        tb=5*op;
        cout<<"5"<<"*"<<op<<"="<<tb<<endl;
        op++;
    }

    return 0;
}