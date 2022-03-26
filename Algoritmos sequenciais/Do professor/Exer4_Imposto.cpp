//Leia o valor do produto e adicione mais 15% de imposto. Escreva o preço final do produto.
#include <iostream>
using namespace std;

int main()
{
    float val_prod, preco_final;
    cout <<"Digite o valor do produto";
    cin >> val_prod;
    preco_final = val_prod + 15.0 / 100 * val_prod;
    cout << preco_final;

    return 0;
}

