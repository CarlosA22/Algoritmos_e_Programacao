#include <iostream>
#include <locale.h>

using namespace std;


int main() {
  setlocale(LC_ALL, "Portuguese");

  int opcao;
  float operando1,operando2,resultado;


  do{
    cout<<"Insira o primeiro operando"<<endl;
    cin >> operando1;

    cout<<"Insira o segundo operando"<<endl;
    cin >> operando2;

      if (operando1 != 0 || operando2 != 0) {
          cout << "Escolha a operação:\n1- soma\n2- produto\n3- potência\n4- divisão\n-> ";
          cin >> opcao;

            switch (opcao) {
              case  1:
              resultado = operando1 + operando2;
              break;


              case  2:
              resultado = operando1 * operando2;
              break;

              case 3:
              resultado = operando1;
              if (operando2 == 0)
                  resultado =1;

                  int i;
                  for (i=1; i<operando2; i++) {
                    resultado = operando1 * resultado;
                  }
              break;


              case  4:
              resultado = operando1 / operando2;
              break;

         }

            cout << endl << resultado << endl;
           }
         } while (operando1 != 0 || operando2 != 0);
 return 0;
}
