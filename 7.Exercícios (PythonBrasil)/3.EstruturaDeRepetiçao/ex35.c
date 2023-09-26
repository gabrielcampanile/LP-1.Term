// Faça um programa que gera uma lista dos números primos existentes entre 1 e um número inteiro informado pelo usuário.

#include <stdio.h>

int main()
{
  int n;

  printf("Digite um número: ");
  scanf("%i", &n);

  printf("Lista dos números primos existentes entre 1 e %i:\n", n);
  
  for(int i=1; i<=n; i+=2)
    printf("%i ", i);

  printf("\n");
  
  return 0;
}