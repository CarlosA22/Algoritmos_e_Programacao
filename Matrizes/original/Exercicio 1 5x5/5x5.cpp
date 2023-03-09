#include <iostream>

using namespace std;

#define MAT 5

int main(){

    int mat[MAT][MAT],i,j;

    for (i=0; i<MAT; i++){  //linhas
        for (j=0; j<MAT; j++){ //colunas 
            mat[i][j] = rand()  % (MAT*MAT) + 1;
        }
    }

    for (i=0; i<MAT; i++){
        for (j=0; j<MAT; j++){
            cout << "\t" << mat[i][j];
        }
        cout << "\t\n";
    }
        
return 0;
}