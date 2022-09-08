#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    float VKG,KGC,VF;

    cout<<"Insira o valor do kg: ";
    cin>>VKG;

    cout<<"Insira a quantidade de kg consumida: ";
    cin>>KGC;

    VF=(VKG*KGC);

    cout<<"O valor final é: "<<VF;

    return 0;
}