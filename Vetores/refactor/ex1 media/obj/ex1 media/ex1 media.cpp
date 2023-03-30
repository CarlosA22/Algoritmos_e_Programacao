#include <iostream>
#include <locale.h>
#define TAM = 10

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[TAM], i = 0, mai, men, soma;
    float med;

    for (i < vet; i++) {
        std::cout << "Digite o " << i << " vetor" << std::endl;
        std::cin >> vet[i];
    }
    mai = vet[0];
    men = vet[0];
    soma = vet[0];

    for (int i = 1; i < vet; i++) {
        soma += vet[i];
        if (vet[i] > mai) {
            mai = vet[i];
        }
        else {
            if (vet[i] < men) {
                men = vet[i];
            }
        }
    }

    med = vet[i] / TAM;

    std::cout << "vetor maior: " << mai << std::endl << "vetor menor: " << men << std::endl << "média: " << med << std::endl;


    return 0;
}
