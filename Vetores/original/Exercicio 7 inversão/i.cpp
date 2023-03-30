#include <iostream> 
#include <locale.h>

using namespace std;

#define VET 5 //define os vetores


int main(){
    setlocale(LC_ALL,"Portuguese");

    int v1[VET],v2[VET],p;

    for (int i=0; i<VET; i++){
            cout << "Insira os vetores: " << endl; // inserção dos vetores
            cin  >> v1[i];}


    cout << "Valores do vetor na ordem digitadas: " << endl; // mostra os vetores na ordem digitada
    for (int i=0; i<VET; i++){
            v2[i]=v1[i]; // tem q deixar v2 = v1 e não v1 = v2
            cout << v1[i] << "|";}
 

     // pode colocar o int p aqui tbm

    for (int i=0; i<VET; i++){ // inverte o vetor
            p=VET-1-i;
            v1[i]=v2[p];} 

    cout << "\nValores invertidos: " << endl; // exibe o vetor
    for (int i=0; i<VET; i++)  
         cout << v1[i] << "|";

    return 0;
}         

     
        
            

 


