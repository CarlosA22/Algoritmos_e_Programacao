#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    const int TAM = 4;
    float mat[TAM][TAM], vet[TAM] = {0};
    int i,j;

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout<<"Digite o valor da linha "<<i+1<<" coluna "<<j+1<<": ";
            cin>>mat[i][j];
        }
    }

    //soma dos elementos de cada linha
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            vet[i] += mat[i][j];
        }    
    }
    
    cout<<"Soma dos elementos de cada linha: "<<endl;
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nSoma das linhas:\n";
    for(int i=0;i<TAM;i++){
        cout<<"Linha: "<<i+1<<" = "<<vet[i]<<endl;
    }

    //multiplica cada elemento pela sua linha
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            mat[i][j] *= vet[i];
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}