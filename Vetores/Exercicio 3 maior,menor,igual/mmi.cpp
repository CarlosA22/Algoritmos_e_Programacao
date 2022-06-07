#include <iostream>
#include <locale.h>

using namespace std;

#define VET 5

int main(){
    setlocale(LC_ALL,"Portuguese");

    int v[VET],mai=0,men=0,ig=0;

   for(int i=0; i<VET; i++){
        cout << "Digite o valor dos vetores: "<<endl;
        cin  >> v[i];
    }
    cout << endl;
    for(int i=1; i<VET; i++){
        if(v[i]>v[0]){
            mai++;
            cout << v[i] << " É maior" << endl;
        }else{
            if(v[i]==v[0]){
                ig++;
                cout << v[i] << " É igual" << endl; 

        }else{
            if(v[i]<v[0]){
                men++;
                cout << v[i] << " É menor" << endl;
            }     
        }
    }
    }
}