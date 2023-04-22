#include <iostream>
#define TAM 5

int main(){
	setlocale(LC_ALL, "Portuguese");
	float mat[TAM][TAM];
	int i,j;

	//preenche
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			std::cout << "Insira 25 algarismos reais: " << std::endl;
			std::cin >> mat[i][j];
		}
	}
	//imprime original
	std::cout<<"Matriz Original\n";
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			std::cout<<"\t"<<mat[i][j];
		}
		std::cout<<"\t\n";
	}
	std::cout<<std::endl;

    //troca
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			if (mat[i][j] > 10) {
				mat[i][j] = 0;
			}
		}
	}

	//imprime
	std::cout<<"Matriz alterada\n";
	for (int i=0; i < TAM; i++){
		for (int j=0; j < TAM; j++){
			std::cout<<"\t"<<mat[i][j];
		}
		std::cout<<"\t\n";
	}
	std::cout<<std::endl;

    return 0;
}
