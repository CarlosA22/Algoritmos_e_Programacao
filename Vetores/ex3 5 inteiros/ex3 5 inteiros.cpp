#include <iostream>
#define TAM 5

int main() {
	setlocale(LC_ALL, "Portuguese");

		int vet[TAM], pri;

		for (int i = 0; i < TAM; i++) {
			std::cout << "Digite um valor inteiro: " << std::endl;
			std::cin >> vet[i];
		}

		pri = vet[0];

		int priel, maior = 0, menor = 0, igual = 0;

		for (int i = 0; i < TAM; i++) {
			if (i == 0) {
				priel = vet[i]; // precisa disso se não o programa sempre vai identificar o vetor 0 como sendo igual a ele mesmo.
			}
			else {
				if (vet[i] == priel){
					igual++;
				}
				else if (vet[i] > priel) {
					maior++;
				}
				else {
					menor++;
				}
			}
		}

		std::cout << "Qnt maiores: " << maior << std::endl << "Qnt menores: " << menor << std::endl << "Qnt iguais: " << igual << std::endl;
	
		return 0;
}