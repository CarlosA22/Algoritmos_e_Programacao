#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char v;

    cout<<"Insira alguma letra: ";
    cin>>v;

    if (v=='a' ||v=='e' ||v=='i' ||v=='o' ||v=='u'){
        cout<<"A letra é uma vogal.";
    }else if (v== '0'||v== '1'||v=='2'||v=='3'||v=='4'||v=='5'||v=='6'||v=='7'||v=='8'||v=='9'){
        cout<<"Erro, número não é letra!";
    }else{
        cout<<"A letra é uma consoante.";
    }

    return 0;
}