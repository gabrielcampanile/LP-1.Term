// FATORIAL

#include <stdio.h>

int main() {
  int n, fat = 1;

  printf("Digite um valor:\n");
  scanf("%i", &n);
  while(n<0)
    scanf("%i", &n);

  /*for (int i = 1; i <= n; i++)
    fat = fat * i;*/
  for(int i = n; i>0; i--)
    fat = fat * i;

  printf("%i! = %i\n", n, fat);

  return 0;
}