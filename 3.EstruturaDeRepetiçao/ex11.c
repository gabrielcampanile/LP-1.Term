#include <stdio.h>

int main()
{
  int i, n1, n2, cont = 0;

  do
  {
    printf("Digite um número:\n");
  scanf("%i", &n1);

    printf("Agora digite um número maior que o anterior:\n");
  scanf("%i", &n2);

    if(n1>=n2)
      printf("Valores inválidos. Digite novamente.\n");
    
    printf("Números inteiros que estão no intervalo compreendido por eles:\n");
  } while(n1>=n2);

  for(i=n1+1; i<n2; i++)
  {
    printf("%i\n", i);
    cont+= i;
  }

  printf("S = %i\n", cont);
  
  return 0;
}