#include <stdio.h>

int main ()
{
  int x, n, fat=1;

  printf("Quantos números deseja avaliar? ");
  scanf("%i", &x);

  for(int j=0; j<x; j++)
  {
    printf("Digite um valor: ");
    scanf("%i", &n);
    fat = 1;
    
    while(n<0 || n>16)
    { 
      printf("Valor inválido.\nDigite outro valor: ");
      scanf("%i", &n);
    }
    
    for(int i=1; i<=n; i++)
      fat = fat*i;
    printf("%i! = %i\n", n, fat);
  }

  return 0;
}