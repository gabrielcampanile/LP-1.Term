#include <stdio.h>

int main()
{
  int n;

  printf("Digite um número entre 0 e 10: ");
  scanf("%i", &n);

  while(n<0 || n>10)
    {
      printf("Valor inválido.\n");
      printf("Digite um número entre 0 e 10: ");
      scanf("%i", &n);
    }
  printf("Valor válido.\n");

  return 0;
}