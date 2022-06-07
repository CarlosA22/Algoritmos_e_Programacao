/*
8.	Faça um programa que solicita ao usuário um número real positivo. Verifique se o número é realmente positivo, e em caso contrário solicite ao usuário digitar novamente (este processo pode se repetir inúmeras vezes e é chamado de consistência, pois garante que o número será válido após a entrada de dados). Saídas:
• Pedido ao usuário = “Digite um número real positivo”;
• Caso número valido = “O número digitado é valido”;
• Caso número invalido = “Número invalido, tente novamente”.
*/


#include <iostream>
using namespace std;

int main() {
    float numero;

    do{
        cout << "Digite um número real positivo: ";
        cin >> numero;

        if (numero < 0){
            cout << "Número inválido, tente novamente\n";
        }
    }while (numero < 0);

    cout << "O número digitado é válido";

    return 0;
}

