#include <iostream>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int vet = 20;
	float a[vet], b[vet], c[vet],soma;

	for (int i = 0; i < vet; i++) {
		std::cout << "Insira um número para o vetor A: " << std::endl;
		std::cin >> a[i];
	}

	for (int i = 0; i < vet; i++) {
		std::cout << "Insira um número para o vetor B: " << std::endl;
		std::cin >> b[i];
	}

	for (int i=0 ; i < vet; i++) {
		c[i] = a[i] - b[i];
		std::cout << "C[" << i << "]=" << c[i] << std::endl;
	}

	return 0;
}
