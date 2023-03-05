#include <iostream>
#include <locale.h>

using namespace std;


int main() {
  setlocale(LC_ALL, "Portuguese");

  int fib1=1,fib2=1;

  int i=1;
  
  for(i=1; i<=10; i++){
    cout<<fib1<<" - "<<fib2<<" - ";
    fib1=fib1+fib2;
    fib2=fib1+fib2;
  }

  return 0;
}