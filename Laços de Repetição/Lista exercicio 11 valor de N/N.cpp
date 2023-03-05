#include <iostream>
#include <locale.h>


int main(){
  setlocale(LC_ALL, "Portuguese");

    int n,i;
    float s=0;

    std::cout<<"Digite um número inteiro e positivo: "<<std::endl;
    std::cin>>n;

    for(i=1; i<=n; i++){
        s = s + 1.0/i;
    }

    std::cout<<s;

return 0;
}