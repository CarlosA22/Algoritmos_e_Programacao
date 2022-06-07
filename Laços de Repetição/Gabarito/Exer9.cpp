//9.	Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como entrada, seleciona uma das opções da lista (1- soma, 2- produto, 3- divisão, 4- potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados sejam iguais a zero. Utilize uma variável do tipo real para exibir o resultado.


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
            cout << "Escolha a operação:\n1- soma\n2- produto\n3- divisão\n4- potência\n-> "; //exibe menu de opções
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
                    resultado = operando1;  //atribui base para primeiro cálculo
                    if (operando2 == 0)
                        resultado =1;
                    int i;
                    for (i=1; i<operando2; i++){ //utiliza segundo operando para controlar repetições (expoente)
                        resultado = operando1 * resultado;
                    }
                    break;
            }
            cout << endl << resultado << endl;
        }
    }while (operando1 != 0 || operando2 != 0);

    return 0;
}

