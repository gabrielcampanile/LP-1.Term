#include <stdio.h>

int main()
{
  int n;

  printf("Digite um valor: ");
  scanf("%i", &n);

  if(n>0)
    printf("%i é positivo.\n", n);
  else
    printf("%i é negativo.\n", n);

  return 0;
}