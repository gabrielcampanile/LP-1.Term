// Faça uma função que calcule todos os divisores de um número.

#include <stdio.h>

void divisores(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("Divisores de %i:\n", n);
  divisores(n);

  return 0;
}

void divisores(int n){
  for(int i=1; i<=n; i++)
    if(n%i==0)
      printf("%i\t", i);
  printf("\n");
}