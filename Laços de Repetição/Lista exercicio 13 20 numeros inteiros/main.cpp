#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int numero, menor;

    int i;
    for(i=1; i <= 20; i++){
        std::cout<<"Insira o "<<i<<" ° algarismo";
        std::cin>>numero;
        if(i == 1)
            menor = numero;

        if(numero < menor)
            menor = numero;
    }
        std::cout<<"O menor número é "<<menor;

    return 0;
}
