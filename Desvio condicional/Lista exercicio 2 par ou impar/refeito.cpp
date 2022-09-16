#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout<<"Digite um número inteiro: ";
    cin>>num;

    if (num % 2 == 0){
        cout<<num<< "\nNúmero par.";
    }else{
        cout<<num<<"\nNúmero impar.";
    }


    return 0;
}