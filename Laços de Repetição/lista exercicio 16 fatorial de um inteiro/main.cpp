#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n,fat=1;

    std::cout<<"Insira um n�mero inteiro"<<std::endl;
    std::cin>>n;


    while (n>1){
        fat = fat * n;
        n--;
    }

    std::cout<<"o fatorial �: "<<fat<<std::endl;

    return 0;
}
