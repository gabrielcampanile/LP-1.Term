#include <stdio.h>

int main()
{
  int b, e, pot=1;

  printf("Digite um valor para a base: ");
  scanf("%i", &b);

  printf("Digite um valor para o expoente: ");
  scanf("%i", &e);
  
  for(int i=0; i<e; i++)
  {
    pot = pot*b;
  }

  printf("%i elevado a %i = %i\n", b, e, pot);

  return 0;
}