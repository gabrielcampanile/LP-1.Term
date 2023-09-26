#include <stdio.h>

int main ()
{
  long int x, n, fat=1;

  printf("Quantos números deseja avaliar? ");
  scanf("%ld", &x);

  for(int j=0; j<x; j++)
  {
    printf("Digite um valor: ");
    scanf("%ld", &n);
    fat = 1;
    
    while(n<0 || n>16)
    { 
      printf("Valor inválido.\nDigite outro valor: ");
      scanf("%ld", &n);
    }
    
    for(int i=1; i<=n; i++)
      fat = fat*i;
    printf("%ld! = %ld\n", n, fat);
  }

  return 0;
}