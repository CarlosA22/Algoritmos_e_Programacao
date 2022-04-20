#include <iostream>
#include <locale.h>
using namespace std;

int main() {
setlocale(LC_ALL,"Portuguese");

    char c;
    bool vogalMinuscula, vogalMaiuscula;

    cout << "Digite uma letra: ";
    cin >> c;

    vogalMinuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    vogalMaiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
      printf("Erro, caractere não alfabético.");
    else if (vogalMinuscula || vogalMaiuscula)
        cout << c << " é uma vogal.";
    else
        cout << c << " é uma consoante.";

    return 0;
}
