#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idades,cont=0;

    int i;
    for(i=1; i <= 10; i++){
        std::cout<<"Insira a idade das pessoas"<<std::endl;
        std::cin>>idades;

        if(idades >= 18)
            cont++;
    }

    std::cout<<"A quantidade de pessoas maiores ou igual a 18 anos é: "<<cont;


    return 0;
}
