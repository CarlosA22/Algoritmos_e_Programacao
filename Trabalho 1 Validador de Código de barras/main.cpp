// Ano: 2022
// Autores: Candido Fachini Neto, Carlos Augusto Mallmann Serena, Cauã Domingos, Felipe Fernando da Silva

#include <iostream>

using namespace std;

#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    long long int codigo_de_barras;
    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, somatorio_numeros, divisao_somatorio_numeros, soma_1, multiplica_10, digito_verificador; // As variáveis "d" representam a posição de um número no código de barras, sendo "d0" o digito mais a direita e o "d12" mais a esquerda.

    cout << "-------------------------------------------------------------------" << endl;
    cout << "VALIDADOR DE CÓDIGO DE BARRAS EAN-13" << endl;
    cout << "-------------------------------------------------------------------" << endl;


    cout << "\n>>> Digite um código de barras de 13 digitos: "; // Solicitar a pessoa o código de barras
    cin >> codigo_de_barras;


    if (codigo_de_barras <= 999999999999) {  // Faz a verificação de condição da quantidade de números no código de barras, deve ser igual a 13, caso superior ou inferior encerra o programa informando o erro
        cout << "\n>>> O código não possui 13 dígitos, favor reescrever." << endl;
    } else if (codigo_de_barras >= 10000000000000) {
        cout << "\n>>> O código possui mais de 13 dígitos, favor reescrever." << endl;
    } else {

    d0 = codigo_de_barras % 10;  // Distribuição dos valores do código de barras em váriaveis
    codigo_de_barras = codigo_de_barras / 10;

    d1 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d2 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d3 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d4 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d5 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d6 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d7 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d8 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d9 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d10 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d11 = codigo_de_barras % 10;
    codigo_de_barras = codigo_de_barras / 10;

    d12 = codigo_de_barras;

    d11 = d11 * 3; // Multiplicação dos valores das variaveis impares por 3
    d9 = d9 * 3;
    d7 = d7 * 3;
    d5 = d5 * 3;
    d3 = d3 * 3;
    d1 = d1 * 3;

    somatorio_numeros = d12 + d11 + d10 + d9 + d8 + d7 + d6 + d5 + d4 + d3 + d2 + d1; // Soma o valor de todas as variaveis

    divisao_somatorio_numeros = somatorio_numeros / 10; // Divisão do somatório das variaveis por 10

    soma_1 = divisao_somatorio_numeros + 1; // Somando +1 ao resultado da divisão do somatório

    multiplica_10 = soma_1 * 10; // Multiplicação do resultador obtido por 10

    digito_verificador = multiplica_10 - somatorio_numeros; // Localizando o digito verificador

      if (digito_verificador % 10 == 0){  // Condição para definir o digito verificador caso ele seja resto de divisão por 10 == 0
            digito_verificador = 0;
      } else if (digito_verificador != d0) { // E também verificação se o digito verificador está correto
            cout << "\n>>> Digito verificador inconsistente";
      } else {
            cout << "\n>>> Código de barras correto" << endl;
      }

    }

    cout << "\n-------------------------------------------------------------------" << endl;
    cout << "FIM DO PROGRAMA" << endl;
    cout << "-------------------------------------------------------------------" << endl;

    return 0;
}