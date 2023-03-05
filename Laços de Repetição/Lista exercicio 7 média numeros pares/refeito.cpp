#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int qntCont=0,num=0,media=0;
    float res=0;

    do{
        cout<<"Digite números inteiros e insira 0 para terminar o input: ";
        cin>>num;

        if(num % 2 == 0 && num != 0){
            media += num; //media = media + num
            qntCont++;
        }

    } while(num != 0);
        if(qntCont !=0){
            res = media / qntCont;
            cout << "Média: " << res << endl;
        }
    

    return 0;
}
