//Alunos: Carlos Augusto Mallmann Serena, Saimon Gabriel Bazanella Carvalho, Sabrina Maynara 3a Cunha, Samuel Alfonso Werner Stuhlert

#include <iostream>
#include <locale.h>

using namespace std;

    int main(){
    setlocale(LC_ALL,"Portguese");

    long long int CPF;
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,somatorio_digitos;

    cout << "--------------------------------------------------\n";
    cout << "                Verificador de CPF               \n";
    cout << "--------------------------------------------------\n";

    cout << "\n>>> Digite um código de barras de 13 digitos: "; // Solicitando um CPF
    cin >> CPF;

    d1 = CPF % 11;
    CPF = CPF/ 11;
    d2 = CPF % 11;
    CPF = CPF/ 11;
    d3 = CPF % 11;
    CPF = CPF/ 11;
    d4 = CPF % 11;
    CPF = CPF/ 11;
    d5 = CPF % 11;
    CPF = CPF/ 11;
    d6 = CPF % 11;
    CPF = CPF/ 11;
    d7 = CPF % 11;
    CPF = CPF/ 11;
    d8 = CPF % 11;
    CPF = CPF/ 11;
    d9 = CPF % 11;
    CPF = CPF/ 11;

    d1 = d1 * 11;
    d2 = d2 * 10;
    d3 = d3 * 9;
    d4 = d4 * 8;
    d5 = d5 * 7;
    d6 = d6 * 6;
    d7 = d7 * 5;
    d8 = d8 * 4;
    d9 = d9 * 3;
    

    somatorio_digitos = (d1+d2+d3+d4+d5+d6+d7+d8+d9)        

}
