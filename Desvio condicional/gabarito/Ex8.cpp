/*
8.	Faça um programa que solicita ao usuário três números reais e exibe na tela apenas o menor deles
*/

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "Digite 3 números: ";
	cin >> n1 >> n2 >> n3;

    if(n1 < n2 && n1 < n3){
        cout << n1;
    }else{
        if(n2 < n1 && n2 < n3){
            cout << n2;
        }else{
            if(n3 < n1 && n3 < n2){
                cout << n3;
            }
        }
    }

	return 0;
}

