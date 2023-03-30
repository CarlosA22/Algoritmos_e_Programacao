#include <iostream>
#define TAM 10

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float n[TAM],med=0;
    int q=0;

    for(int i=0; i<TAM; i++){
        std::cout<<"Digite a "<<i<<"° nota"<<std::endl;
        std::cin>>n[i];
        med=med+n[i];
    }
    med=med/TAM;
    std::cout<<"a média dos alunos foi: "<<med<<std::endl;
    std::cout<<"Notas acima da média: "<<std::endl;

    for(int i=0; i<TAM; i++){
        if(n[i]>med){
            q++;
            std::cout<<n[i]<<std::endl;
        }
    }

    std::cout<<"Quantidade: "<<q;

    return 0;
}
