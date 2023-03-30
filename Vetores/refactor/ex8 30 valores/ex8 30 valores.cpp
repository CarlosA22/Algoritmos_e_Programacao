#include <iostream>

int main()
{
    const int TAM = 30;
    int vet1[TAM], sopar=0, soimpar=0;
	int par[TAM] = { 0 };
	int impar[TAM] = { 0 };

    for (int i = 0; i < TAM; i++) {
		std::cout << "Digite os valores do vetor 1: ";
		std::cin >> vet1[i];

		par[i] = 0;
		impar[i]=0;

		if (vet1[i] % 2 == 0)
			par[i] = vet1[i];
		else
			impar[i] = vet1[i];

		sopar += par[i];
		soimpar += impar[i];
	}

	std::cout << "impar [" << soimpar << "]" << std::endl;
	std::cout << "par [" << sopar << "]" << std::endl;

	std::cout << "Valores do vetor de maior valor: " << std::endl;
	for (int i = 0; i < TAM; i++) {
		if (sopar > soimpar)
			std::cout << "| " << par[i] << " | \n";
		else
			std::cout << "| " << impar[i] << " | \n";
	}

	return 0;
}
   
