#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int h,m;

    cout << "digite uma hora e em seguida um minuto: ";
    cin  >> h >> m;


    if ((h >= 0 && h < 24) && (m >= 0 && m < 60)) {
        cout << "hor�rio v�lido";
    } else {
        cout << "hor�rio inv�lido";
    }
      return 0;
}
