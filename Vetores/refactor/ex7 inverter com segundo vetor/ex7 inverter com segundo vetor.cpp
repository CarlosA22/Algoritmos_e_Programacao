#include <iostream>

int main()
{
	const int vet = 5;
	int vetor1[vet], vetor2[vet];

	for (int i = 0; i < vet; i++) {
		std::cout << "Insira 5 algarismos inteiros: " << std::endl;
		std::cin >> vetor1[i];
	}

	for (int i = vet - 1; i >= 0; i--) {
		vetor2[i] = vetor1[i];
		std::cout << "Vetor [" << i << "]: " << vetor2[i] << std::endl;
	}



	return 0;
}

