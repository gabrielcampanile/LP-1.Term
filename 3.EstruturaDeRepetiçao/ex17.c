#include <stdio.h>

int main()
{
  int n, fat = 1;

  printf("Digite um valor: ");
  scanf("%i", &n);

  for(int i=1; i<=n; i++)
    fat = fat*i;

  printf("%i! = %i\n", n, fat);

  return 0;
}