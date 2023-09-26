#include <stdio.h>

int main()
{
  int n, cont;

  printf("Digite um valor: ");
  scanf("%i", &n);

  printf("Primos:\n");
  for(int i=1; i<=n; i++)
  {
    cont = 0;
    for(int j=1; j<=i; j++)
    {
      if(i%j==0)
        cont++;
    }
    if(cont==2)
      printf("%i\n", i);
  }
  return 0;
}