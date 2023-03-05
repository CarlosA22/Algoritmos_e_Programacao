#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    int n;
    cout << "Diga um numero inteiro nao negativo\n";
    cin >> n;

    int soma=0;
    int cont=1;
    //while (cont <= n){
        //soma+=cont;      <----------- CERTO
        //cont++;
    //}
    
    // break

    //do{
       // soma+=cont;
     //   cont++;          <------ ERRADO
   // }while(cont <=n);

   for (int j=1 ; j<=n ; j+=1){
    
   }


    cout <<"A soma dos numeros de 0 ate " << n << "= "<< soma<<endl;

    return 0;
}