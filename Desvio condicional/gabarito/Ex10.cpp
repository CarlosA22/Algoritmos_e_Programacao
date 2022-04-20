/*
10.	Faça um programa que solicita ao usuário três valores correspondentes aos lados de um triângulo. Informe se o triângulo é eqüilátero (possui 3 lados iguais), isósceles (possui dois lados iguais) ou escaleno (não possui lados iguais). Saídas:
•	Pedido para o usuário = "Digite três números inteiros: ";
•	Caso equilátero = “O triângulo é equilátero”;
•	Caso isósceles = ”O triângulo é isósceles”;
•	Caso escaleno = “O triângulo é escaleno”.
*/

#include <iostream>
using namespace std;
int main()
{
    int lado1, lado2, lado3;
    cout << "\nDigite três valores correspondentes aos lados do triângulo: ";
    cin >> lado1 >> lado2 >> lado3;
    if (lado1 == lado2 &&  lado2 == lado3){
        cout << "\nÉ um triangulo eqüilátero";
    }else{
        if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
            cout << "\nÉ um triangulo escaleno";
        }else{
            cout << "\nÉ um triangulo isósceles";
        }
 }
 return 0;
}

