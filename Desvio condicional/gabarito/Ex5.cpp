/*
5.	Faça um programa que solicita ao usuário dois números inteiros. O primeiro é o valor das horas e o segundo dos minutos. Verifique se a hora é válida e exiba uma mensagem correspondente (considere a hora 24:00 como inválida). Saídas:
•	Pedido para horas = "Entre com um número para as horas: ";
•	Pedido para os minutos = "Entre com um número para os minutos:";
•	Caso verdadeiro = “A hora é válida”;
•	Caso falso = ”A hora é inválida”.
*/

#include <iostream>
using namespace std;

int main()
{
int horas, minutos;

    cout << "Entre com um número para as horas: ";
    cin >> horas;

    cout << "Entre com um número para os minutos: ";
    cin >> minutos;

    if((horas >= 0 && horas < 24) && (minutos >= 0 && minutos < 60)){
        cout << "A hora é válida";
    } else {
        cout << "A hora é inválida”";
    }
    return 0;
}

