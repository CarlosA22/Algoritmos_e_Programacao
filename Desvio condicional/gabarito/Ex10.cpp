/*
10.	Fa�a um programa que solicita ao usu�rio tr�s valores correspondentes aos lados de um tri�ngulo. Informe se o tri�ngulo � eq�il�tero (possui 3 lados iguais), is�sceles (possui dois lados iguais) ou escaleno (n�o possui lados iguais). Sa�das:
�	Pedido para o usu�rio = "Digite tr�s n�meros inteiros: ";
�	Caso equil�tero = �O tri�ngulo � equil�tero�;
�	Caso is�sceles = �O tri�ngulo � is�sceles�;
�	Caso escaleno = �O tri�ngulo � escaleno�.
*/

#include <iostream>
using namespace std;
int main()
{
    int lado1, lado2, lado3;
    cout << "\nDigite tr�s valores correspondentes aos lados do tri�ngulo: ";
    cin >> lado1 >> lado2 >> lado3;
    if (lado1 == lado2 &&  lado2 == lado3){
        cout << "\n� um triangulo eq�il�tero";
    }else{
        if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
            cout << "\n� um triangulo escaleno";
        }else{
            cout << "\n� um triangulo is�sceles";
        }
 }
 return 0;
}

