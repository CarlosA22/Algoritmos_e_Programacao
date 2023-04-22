#include <iostream>
using namespace std;

int main(){
    float mat[5][5]={0},s;
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<"Insira 25 algarismos: ";
            cin>>mat[i][j];
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }

    s=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           s+=mat[i][j];
        }
    }

    cout<<"\nSoma = "<<s;

    return 0;
}