#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    float mat[4][4] = {0};
    int indi=0,indj=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"insira o "<<i+1<<" Número";
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }

    float aux=mat[0][0];
    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
            if(aux < mat[i][j]){
               aux = mat[i][j];
               indi = i;
        }
    }
    }

    for(int i=0;i<4;i++){
    for(int j=0; j<4;j++){
        if(aux > mat[i][j]){
           aux = mat[i][j];
           indj = j;
        }
    }
    }
    cout<<"\nMinimax = mat["<<indi+1<<"]["<<indj+1<<"]"<<" ->"<<mat[indi][indj];

}