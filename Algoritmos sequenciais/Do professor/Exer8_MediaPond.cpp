//O sistema de avalia��o de determinada disciplina, � composto por tr�s provas. A primeira prova tem peso 2, a segunda tem peso 4 e a terceira prova tem peso 6. Fa�a um programa que solicita as notas para o aluno, calcula e exibe a m�dia final deste aluno.

#include <iostream>
using namespace std;
int main(){
    float prova1, prova2, prova3, media;
    cout << "Digite as notas: ";
    cin >> prova1 >> prova2 >> prova3;
    media = (prova1 * 2 + prova2 * 4 + prova3 * 6) / 12;
    cout << media;

    return 0;
}

