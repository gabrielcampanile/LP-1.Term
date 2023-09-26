// Escreva uma função que receba um número e retorne o menor inteiro positivo cujo quadrado é superior ao valor dado.

#include <stdio.h>
#include <math.h>

int power(int);

int main(){
  int n, x;

  printf("N: ");
  scanf("%i", &n);

  x = power(n);

  printf("O menor inteiro positivo cujo quadrado é superior ao valor dado: %i\n", x);
  printf("%i^2 = %i\n", x, x*x);

  return 0;
}

int power(int n){
  for(int i=1; i<n; i++)
    if(pow(i, 2)>n)
      return i;
}