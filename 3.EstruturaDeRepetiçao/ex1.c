#include <stdio.h>

int main()
{
  int n;
  
  do
    {
      printf("Digite um número entre 0 e 10: ");
      scanf("%i", &n);
      if(n<0 || n>10)
        printf("Valor inválido.\n");
    } while(n<0 || n>10);

  printf("Valor válido.\n");

  return 0;
}