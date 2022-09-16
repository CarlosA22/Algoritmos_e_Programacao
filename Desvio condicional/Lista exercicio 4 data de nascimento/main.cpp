#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int DND,DNM,DNA,DAD,DAM,DAA;

    cout << "Digite sua data de nascimento DD/MM/AAAA: ";
    cin  >> DND >> DNM >> DNA;
    cout << "Digite a data atual DD/MM/AAAA: ";
    cin  >> DAD >> DAM >> DAA;


    if (DNM < DAM || DNM == DAM && DND <= DAD){
        cout << "Idade da pessoa: " << DAA - DNA;
    } else {
        cout << "Idade da pessoa: " << DAA - DNA -1;
    }


    return 0;
}
