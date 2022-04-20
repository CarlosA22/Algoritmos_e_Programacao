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
      printf("Erro, caractere n�o alfab�tico.");
    else if (vogalMinuscula || vogalMaiuscula)
        cout << c << " � uma vogal.";
    else
        cout << c << " � uma consoante.";

    return 0;
}
