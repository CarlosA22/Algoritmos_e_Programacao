#include <iostream>
#include <locale.h>

using namespace std;

#define MAT 5

int main(){
    float mat[MAT][MAT];
    int i,j;

    //preenche
    for (i=0; i<MAT; i++){
        for (j=0; j<MAT; j++){
            cout << "Digite os valores da matriz: " << endl;
            cin  >> mat[i][j];
        }
    }
    
    //troca
    for (i=0; i<MAT; i++){
        for (j=0; j<MAT; j++){
            if (mat[i][j] > 100)
                mat[i][j] = 0;
        }
        
    }

    //imprime
    for (int i=0; i<MAT; i++){
        for (int j=0; j<MAT; j++){
            cout << "\t" << mat[i][j];
        }
        cout << "\t\n";
    }
    cout << endl;

    return 0;
}

