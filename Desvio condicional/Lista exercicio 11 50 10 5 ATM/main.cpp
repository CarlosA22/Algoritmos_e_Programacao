#include <iostream>
#include <locale.h> //tem que mostrar o minimo de cada celula a ser sacada

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float valor,qntdC;

    cout<<"Digite o valor do saque"<<"\nNotas disponíveis: "<<"50R$, 10,R$ 5R$"<<endl;
    cin>>valor;

    if(valor % 50 = 0){
        qntdC = valor / 50;
        cout<<"Voce precisa de: "<<qntC<<" notas de 50R$"<<endl;

        }else if(valor % 10 = 0){
            qntdC = valor / 10;
            cout<<"Voce precisa de: "<<qntdC<<" notas de 10R$"<<endl;

            }else if(valor % 5 = 0){
                qntdC = valor / 5;
                cout<<"Voce precisa de: "<<qntdC<<" notas de 5R$"<<endl;

                else if(valor % 50>=10 && valor % 10 = 0)
                    qntdC=valor/

    return 0;

}