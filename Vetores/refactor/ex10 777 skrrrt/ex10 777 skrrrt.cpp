#include <iostream>

int main(){
	setlocale(LC_ALL, "Portuguese");

	const int TAM = 5;
	int vet1[TAM],sete[TAM],quant=0;

	for (int i = 0; i < TAM; i++) {
		std::cout << "Preencha o vetor: \n";
		std::cin >> vet1[i];
	}


	for(int i=0; i<TAM; i++){
		if (vet1[i] == 7) {
			quant++;
			std::cout << "| " << vet1[i] << " |\n"<< "numero 7 encontrado na posição " << i << " pela " << quant << "a vez\n";
		}
		else {
			std::cout << "| " << vet1[i] << " |\n";
		}

	}
	return 0;
}
