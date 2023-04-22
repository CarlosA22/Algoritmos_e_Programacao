#include <iostream>

int main()
{
    const int TAM = 5;
    int matriz[TAM][TAM],linha,coluna;

    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            matriz[linha][coluna] = 1;
        }

    }

    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            std::cout << matriz[linha][coluna]<<"\t";
        }
        std::cout<<std::endl;
    }

    return 0;
}
