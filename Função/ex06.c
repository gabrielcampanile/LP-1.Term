// Escreva uma função que receba um número inteiro e retorne seu fatorial.

#include <stdio.h>

int fatorial(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("%i! = %i\n", n, fatorial(n));

  return 0;
}

int fatorial(int n){
  if(n==1)
    return 1;
  else
    return n * fatorial(n-1);
}