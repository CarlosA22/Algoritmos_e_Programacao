#include <iostream>
using namespace std;

int main(){
    int matA[3][5]={0},matB[3][5]={0},matC[3][5]={0};
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cout<<"Insira 15 algarismos: ";
            cin>>matA[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cout<<"Insira 15 algarismos novamente: ";
            cin>>matB[i][j];
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            matC[i][j]= matA[i][j] + matB[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cout<<matC[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"Elementos da linha 2 da matriz resultante: ";
        for(j=0;j<5;j++){ //precisa fazer essa maracutaia ai pra imprimir apenas os 5 elementos da linha
            cout<<matC[2][j]<<"\t";
        }

    cout<<"\n";
    cout<<"Elementos da coluna 3 da matriz resultante: ";
        for(j=0;j<3;j++){ //precisa fazer essa maracutaia ai pra imprimir apenas os 3 elementos da coluna.
            cout<<matC[j][3]<<"\t";
        }

    return 0;
}