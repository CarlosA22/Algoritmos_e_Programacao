#include <iostream>

using namespace std;

int main()
{
    int num = 100, soma = 0;

    while (num<=200){
        soma = num + soma;
        num++;
     }
     cout << soma;

    return 0;
}
