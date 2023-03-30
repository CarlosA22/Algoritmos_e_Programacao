#include <iostream>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	const int TAM = 10;
	int vet[TAM],fatma, fatme, menor, maior;

	for (int i = 0; i < TAM; i++)
		vet[i] = 0;

	for (int i = 0; i < TAM; i++) {
		std::cout << "Insira um valor inteiro: " << std::endl;
		std::cin >> vet[i];
	}

	menor = vet[0];
	maior = vet[0];

	for (int i = 0; i < TAM; i++) {
		if (vet[i] > maior) {
			maior = vet[i];
		}
		if (vet[i] < menor) {
			menor = vet[i];
		}
	}
	
	fatma = 1;
	for (int i = 1; i <= maior; i++)
		fatma = fatma * i;

	fatme = 1;
	for (int i = 1; i <= menor; i++)
		fatme = fatme * i;

	std::cout << "fatorial do maior número: " << fatma << std::endl;
	std::cout << "fatorial do menor número: " << fatme << std::endl;
	
	return 0;
}