#include <stdio.h>

int main()
{
  int n, soma=0;

  for(int i=0; i<5; i++)
  {
    printf("Digite um valor: ");
    scanf("%i", &n);
    soma = soma + n;
  }

  printf("soma: %i\n", soma);
  printf("média: %.2f\n", (float)soma/5);

  return 0;
}