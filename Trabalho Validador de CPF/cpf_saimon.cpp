#include <iostream>
#include <string.h>
using namespace std;

int main()
{


    setlocale(LC_ALL, "Portuguese");

    string str = "123";
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, smt, smt2, pdv,sdv;

    cout<< "Digite os 9 números do CPF: ";
    cin>>str;

    n1=((int)str[0]- '0');
    n2=((int)str[1]- '0');
    n3=((int)str[2]- '0');
    n4=((int)str[3]- '0');
    n5=((int)str[4]- '0');
    n6=((int)str[5]- '0');
    n7=((int)str[6]- '0');
    n8=((int)str[7]- '0');
    n9=((int)str[8]- '0');

    smt=((n1*10)+(n2*9)+(n3*8)+(n4*7)+(n5*6)+(n6*5)+(n7*4)+(n8*3)+(n9*2))%11;


    if(smt <2)
    {
        pdv=0;
    }

    else if(smt >=2)
    {
        pdv=11-smt;
    }

    smt2=((n1*11)+(n2*10)+(n3*9)+(n4*8)+(n5*7)+(n6*6)+(n7*5)+(n8*4)+(n9*3)+(pdv*2))%11;

     if(smt2 < 2)
{
    sdv=0;
}
    else if (smt2 >= 2)
    {
        sdv=11-smt2;

    }

    cout<<"Os dois últimos números do seu CPF são:"<<pdv<<sdv;





return 0;


}


