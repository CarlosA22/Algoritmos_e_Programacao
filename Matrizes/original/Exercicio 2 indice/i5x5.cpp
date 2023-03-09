#include <iostream>

#define MAT 5

int main(){
    int mat[MAT][MAT]={},i,j;

    for (i=0; i<MAT; i++){
        for (j=0; j<MAT; j++){
            mat[i][i] = 1;
        }
    }

    for (i=0; i<MAT; i++){
        for (j=0; j<MAT; j++){ 
            std::cout << mat[i][j] << "\t";
     }      std::cout << "\t\n";
    }

    return 0;
}