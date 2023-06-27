// TABUADA

#include <stdio.h>

int main()
{
  int i, n;

  printf("Digite o valor desejado: ");
  scanf("%d", &n);

  printf("Tabuada de %i:\n", n);
  
  for(i=1;i<=10;i++)
    printf("%i x %i = %i\n", n, i, n*i);

  return 0;
}