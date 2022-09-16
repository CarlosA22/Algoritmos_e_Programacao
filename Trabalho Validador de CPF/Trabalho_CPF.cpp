//Alunos: Carlos Augusto Mallmann Serena, Saimon Gabriel Bazanella Carvalho, Sabrina Maynara 3a Cunha, Samuel Alfonso Werner Stuhlert

#include <iostream>
#include <locale.h>

using namespace std;

    int main(){
    setlocale(LC_ALL,"Portguese");

    long long int CPF;
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,somatorio_digitos,divisao_somatorio_digitos,divisao_somatorio_digitos2;

    cout << "--------------------------------------------------\n";
    cout << "                Verificador de CPF               \n";
    cout << "--------------------------------------------------\n";

    cout << "\n>>> Digite o seu CPF sem os digitos verificadores: "; // Solicitando um CPF
    cin >> CPF;

    d1 = CPF;
    d2 = CPF;
    d3 = CPF;  
    d4 = CPF;  
    d5 = CPF; 
    d6 = CPF;  
    d7 = CPF; 
    d8 = CPF;  
    d9 = CPF;
    

    d1 = d1 * 10;
    d2 = d2 * 9;
    d3 = d3 * 8;
    d4 = d4 * 7;
    d5 = d5 * 6;
    d6 = d6 * 5;
    d7 = d7 * 4;
    d8 = d8 * 3;
    d9 = d9 * 2;
    


    somatorio_digitos = (d1+d2+d3+d4+d5+d6+d7+d8+d9);   
    divisao_somatorio_digitos = (somatorio_digitos % 11);  

    if(divisao_somatorio_digitos < 2){
        divisao_somatorio_digitos = 0;
    }else{
        divisao_somatorio_digitos = 11 - divisao_somatorio_digitos;
    }

    d1 = d1 * 11;
    d2 = d2 * 10;
    d3 = d3 * 9;
    d4 = d4 * 8;
    d5 = d5 * 7;
    d6 = d6 * 6;
    d7 = d7 * 5;
    d8 = d8 * 4;
    d9 = d9 * 3;
    divisao_somatorio_digitos = divisao_somatorio_digitos * 2;

    somatorio_digitos = (d1+d2+d3+d4+d5+d6+d7+d8+d9+divisao_somatorio_digitos);
    divisao_somatorio_digitos2 = (somatorio_digitos % 11);

    if(divisao_somatorio_digitos2 < 2){
        divisao_somatorio_digitos2 = 0;
    }else{
        divisao_somatorio_digitos2 = 11 - divisao_somatorio_digitos2;
    }

cout<<divisao_somatorio_digitos<<divisao_somatorio_digitos2;

return 0;

}
