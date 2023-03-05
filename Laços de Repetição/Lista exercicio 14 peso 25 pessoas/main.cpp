#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float peso, menor, maior;

    int i;
    for(i=1; i <= 25; i++){
        std::cout<<"Insira o peso da "<<i<<"° Pessoa "<<std::endl;
        std::cin>>peso;
        if (i==1){
            menor=peso;
            maior=peso;
        }

        if (peso < menor)
            menor = peso;

        if (peso > maior)
            maior = peso;
    }
        std::cout<<"O maior número é "<<maior<<std::endl;
        std::cout<<"O menor número é "<<menor<<std::endl;

    return 0;
}
