#include <stdio.h>

int main()
{
  int n, cont = 0;

  printf("Digite um número: ");
  scanf("%i", &n);

  for(int i=1; i<=n; i++)
  {
    if(n%i==0)
      cont++;
  }
  if(cont==2)
    printf("Primo\n");
  else
    printf("Não é primo.\n");
  
  return 0;
}
