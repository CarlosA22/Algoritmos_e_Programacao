#include <iostream>

int main(){
    setlocale(LC_ALL, "Portuguese");

    const int TAM = 10;
    int vet[TAM];
    
    for (int i = 0; i < TAM; i++) {
        std::cout << "Insira um valor" << std::endl;
        std::cin >> vet[i];
    }

    for (int i = TAM-1 ; i >= 0; i--) {
        std::cout << vet[i] << " ";
    }

    return 0;
}