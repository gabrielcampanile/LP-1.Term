/* Escreva uma função que calcule a série de Fibonacci. Observação: Uma seqüência é dita de Fibonacci quando os dois primeiros termos forem 0 e 1 e todos os termos consecutivos tenham valor igual à soma dos dois termos anteriores.
Exemplo: 011235813213455... */

#include <stdio.h>

void fibo(int);

int main(){
  int n;

  printf("Nº de termos: ");
  scanf("%i", &n);

  fibo(n);

  return 0;
}

void fibo(int n){
  int fib, fib1 = 0, fib2 = 1;
  for(int i=0; i<n; i++){
    if(i==0)
      fib = 0;
    else
      fib = fib1 + fib2;
    printf("%i", fib);
    fib1 = fib2;
    fib2 = fib;
  }
  printf("\n");
}