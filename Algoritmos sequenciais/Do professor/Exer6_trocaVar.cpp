//Fa�a um programa que solicita ao usu�rio dois n�meros inteiros e armazena nas vari�veis A e B.
////A seguir (utilizando apenas atribui��es entre vari�veis) troque os seus conte�dos fazendo com que o valor que est� em A passe para B e vice-versa.
////Ao final escreva os valores que ficaram armazenados nas vari�veis A e B respectivamente.

#include <iostream>
using namespace std;
int main()
{
    int var_a, var_b, var_temporaria;
    cout << "Digite os valores para A e B: ";
    cin >> var_a >> var_b);
    var_temporaria = var_a;
    var_a = var_b;
    var_b = var_temporaria;
    cout << var_a << var_b;

    return 0;
}

