#include <iostream> 
#include <locale.h>

using namespace std;

#define VET 10 //define os vetores


int main(){
    setlocale(LC_ALL,"Portuguese");

    int v[VET],mai,men,fmai,fmen;

    for (int i=0; i<VET; i++){
        v[i]=0;}

    for (int i=0; i<VET; i++){
        cout << "Preencha os vetores: " << endl;
        cin  >> v[i];}

    mai=v[0];
    men=v[0];
    for (int i=1; i<VET; i++)
            if (v[i]>mai)
                    v[i]=mai;
    for (int i=1; i<VET; i++)
            if (v[i]<men)
                    v[i]=men;
    fmai=1;
    for (int i=1; i<=mai; i++)
                fmai=fmai*i;
    fmen=1;
    for (int i=1; i<=men; i++)
                    fmen=fmen*i;
                    
    cout << "\nFatorial do maior: " << fmai;
    cout << "\nFatorial do menor: " << fmen;

    return 0;
}
    