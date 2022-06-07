//9.	Fa�a um programa para uma calculadora simples que solicita ao usu�rio dois operandos como entrada, seleciona uma das op��es da lista (1- soma, 2- produto, 3- divis�o, 4- pot�ncia) e exibe o resultado. O algoritmo deve executar repetidamente at� que os dois operandos informados sejam iguais a zero. Utilize uma vari�vel do tipo real para exibir o resultado.


#include <iostream>
using namespace std;

int main() {
    float operando1, operando2, resultado;
    int operador;

    do{
        cout << "Digite um valor para o operando 1: ";
        cin >> operando1;

        cout << "Digite um valor para o operando 2: ";
        cin >> operando2;

        if (operando1 != 0 || operando2 != 0){
            cout << "Escolha a opera��o:\n1- soma\n2- produto\n3- divis�o\n4- pot�ncia\n-> "; //exibe menu de op��es
            cin >> operador;

            switch(operador){
                case 1:
                    resultado = operando1 + operando2;
                    break;
                case 2:
                    resultado = operando1 * operando2;
                    break;
                case 3:
                    resultado = operando1 / operando2;
                    break;
                case 4:
                    resultado = operando1;  //atribui base para primeiro c�lculo
                    if (operando2 == 0)
                        resultado =1;
                    int i;
                    for (i=1; i<operando2; i++){ //utiliza segundo operando para controlar repeti��es (expoente)
                        resultado = operando1 * resultado;
                    }
                    break;
            }
            cout << endl << resultado << endl;
        }
    }while (operando1 != 0 || operando2 != 0);

    return 0;
}

