#include <iostream>

int main() {
	setlocale(LC_ALL, "Portuguese");

	const int TAM = 5;
	int mat[TAM][TAM], i, j;

	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			if (i == j) {
				mat[i][j] = 1;
			}
			else {
				mat[i][j] = 0;
			}
		}
	}
	
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			std::cout << mat[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}