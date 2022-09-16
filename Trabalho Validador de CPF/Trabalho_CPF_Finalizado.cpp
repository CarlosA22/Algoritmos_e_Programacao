//Ano:2022
//Autores: Carlos Augusto Mallmann Serena, Sabrina Maynara da Cunha, Samuel Alfonso Werner Stuhlert , Saimon Gabriel Bazanella Carvalho

#include <iostream>

#include<locale.h>

using namespace std;

int main() {

  setlocale(LC_ALL, "Portuguese"); //Importação para possibilitação de escrita com acentuação de acordo com a língua portuguesa

  int cpf; //Variável receptora do valor contendo os 9 primeiros digitos do CPF a ser calculado.
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, smt, smt2, pdv, sdv; //nx(n1,n2,n3...)= Variáveis em int que irão receber os digitos
  //smt e smt2= Somatório 1 e somatório 2 para executar os calcúlos necessários para atribuição de pdv e sdv
  // pdv= Primeiro Digito Verificador; sdv= Segundo Digito Verificador

  cout << "Digite os 9 números do CPF: "; //solicita o valor de 9 digitos
  cin >> cpf; //Recebe o valor de 9 digitos

  if (cpf >= 1000000000) {
    cout << "\n>>> O CPF digitado possuí mais de 9 dígitos, por favor reescrever." << endl;
    return 0;
  } else {

    n1 = cpf / 100000000; //Faz a divisão do valor para saber o primeiro numero
    n2 = cpf / 10000000 % 10; //Faz a divisao do valor para saber o dois primeiros numeros, depois faz o mod para separar o segundo numero. E assim por diante
    n3 = cpf / 1000000 % 100 % 10;
    n4 = cpf / 100000 % 1000 % 100 % 10;
    n5 = cpf / 10000 % 10000 % 1000 % 100 % 10;
    n6 = cpf / 1000 % 100000 % 10000 % 1000 % 100 % 10;
    n7 = cpf / 100 % 1000000 % 100000 % 10000 % 1000 % 100 % 10;
    n8 = cpf / 10 % 10000000 % 1000000 % 100000 % 10000 % 1000 % 100 % 10;
    n9 = cpf / 1 % 100000000 % 10000000 % 1000000 % 100000 % 10000 % 1000 % 100 % 10;
  }

  smt = ((n1 * 10) + (n2 * 9) + (n3 * 8) + (n4 * 7) + (n5 * 6) + (n6 * 5) + (n7 * 4) + (n8 * 3) + (n9 * 2)) % 11; //Executa os calcúlos necessários para encontrar o somatório

  if (smt < 2) { //Verifica  se a variável smt(Somatório) cumpre a condição e atribui a condição da mesma a pdv(Primeiro digito verificador)
    pdv = 0;
  } else if (smt >= 2) {
    pdv = 11 - smt;
  }

  smt2 = ((n1 * 11) + (n2 * 10) + (n3 * 9) + (n4 * 8) + (n5 * 7) + (n6 * 6) + (n7 * 5) + (n8 * 4) + (n9 * 3) + (pdv * 2)) % 11; //Executa os calcúlos necessários para encontrar o segundo somatório

  if (smt2 < 2) { //Verifica se a variável smt(Somatório 2) cumpre a condição e atribui a condição da mesma a sdv(Segundo Digito Verificador)
    sdv = 0;
  } else if (smt2 >= 2) {
    sdv = 11 - smt2;
  }

  cout << "Os dois últimos números do seu CPF são:" << pdv << sdv;
  cout << "\nO seu CPF inteiro então é: " << n1 << n2 << n3 << "." << n4 << n5 << n6 << "." << n7 << n8 << n9 << "-" << pdv << sdv;
  cout << "\nFIM DO PROGRAMA";

  return (0);
}