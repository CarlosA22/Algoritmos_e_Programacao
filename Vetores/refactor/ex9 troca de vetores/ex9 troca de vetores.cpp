#include <iostream>

int main(){
    setlocale(LC_ALL, "Portuguese");

    const int TAM = 8;
    int vet1[TAM], vet2[TAM], troca;

    for (int i = 0; i < TAM; i++) {
        std::cout << "insira o vetor 1: " << std::endl;
        std::cin >> vet1[i];
    }

    for (int i=0; i<TAM; i++){
		std::cout << "insira o vetor 2: " << std::endl;
        std::cin >> vet2[i]; 
	}
    int i = 0;

    for (int i = 0; i < TAM; i++) {
        troca = vet1[i];
        vet1[i] = vet2[i];
        vet2[i] = troca;
    }

    std::cout << "Valores resultantes de A: \n";
    for (int i = 0; i < TAM; i++) {
        std::cout << "| " << vet1[i] << " | \n";
    }
    std::cout << "Valores resultantes de B: \n";
    for (int i = 0; i < TAM; i++) {
        std::cout << "| " << vet2[i] << " | \n";
    }
    

    return 0;
}
