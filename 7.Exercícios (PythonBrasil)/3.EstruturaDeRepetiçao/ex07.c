#include <stdio.h>

int main()
{
  int n, maior;

  printf("Digite um valor: ");
  scanf("%i", &n);
  maior = n;

  for(int i=0; i<4; i++)
    {
      printf("Digite um valor: ");
      scanf("%i", &n);
      if(n>maior)
        maior = n;
    }

  printf("%i\n", maior);

  return 0;
}