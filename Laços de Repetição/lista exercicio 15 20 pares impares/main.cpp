#include <iostream>
#include <locale.h> //bibliotecas

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int val,par=0,impar=0;

    int i;

    for(i=1; i <= 20; i++){ //regras do for
        std::cout<<"Insira o "<<i<<" algarismo inteiro"<<std::endl;
        std::cin>>val;

        if(val%2 == 0){ //se o valor pelo mod de 2 for 0 ent�o o n�mero � impar.
            par++;
        }else{
            impar++; //caso seja outra coisa o n�mero � par.
            }
    }


    std::cout<<"Cont�m: "<<impar<<" valores impares"<<std::endl; //se colocar o val no lugar do par e impar ele s� vai imprimir a quantidade de algarismos digitados ent�o tem que ser assim.
    std::cout<<"Cont�m: "<<par<<" valores pares"<<std::endl;


    return 0;
}
