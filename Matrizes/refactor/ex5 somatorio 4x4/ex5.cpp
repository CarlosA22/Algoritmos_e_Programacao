#include <iostream>
#define TAM 4

int main(){
    setlocale(LC_ALL,"Portuguese");

    
    float mat[TAM][TAM];
    int i,j,soma;

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            std::cout<<"Insira 16 valores reais: \n";
            std::cin>>mat[i][j];
        }
    }

    soma = 0;
    for(i = 0; i<4; i++){
        soma = soma + mat[i][i];
    }

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            std::cout << mat[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }

    std::cout<<"\nsoma = "<<soma;

    return 0;
}