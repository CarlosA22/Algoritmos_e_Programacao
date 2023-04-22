#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguse");
    int mat1[4][6], mat2[6][4], matR[4][4] = {0};
    int i,j;
    srand(time(0));
    
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            cin>>mat1[i][j];
        }
    }

    for (int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            cin>>mat2[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            matR[i][j] = mat1[i][j]*mat2[i][j];
            cout<<matR[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}