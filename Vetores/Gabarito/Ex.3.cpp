///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3 - Declare um vetor de 5 inteiros, leia um valor para cada posição e no final mostre quantos elementos possuem valor maior, menor e igual ao primeiro elemento do vetor/////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 5

int main(){
    setlocale(LC_ALL,"Portuguese");

	int v[TAM], maior=0, menor=0, igual=0;
	for(int i=0;i<TAM;i++){
        cout << "Digite um valor: ";
		cin >> v[i];
	}
	cout << endl;
	for(int i=1;i<TAM;i++){
		if(v[i]>v[0]){
            maior++;
			cout << "Maior " << v[i] << endl;
        }else{
			if(v[i]==v[0]) {
			    igual++;
				cout << "Igual " << v[i] << endl;
            }else{
				if(v[i]<v[0]) {
				    menor++;
					cout << "Menor " << v[i] << endl;
				}
			}
		}
	}
	cout << "\nQuantidade de maiores = " << maior << ", menores = " << menor << ", iguais =" << igual << endl;

	return 0;
}

