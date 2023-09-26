#include <stdio.h>

int main()
{
  int n;

  printf("Digite um número inteiro: ");
  scanf("%i", &n);

  if(n%2==0)
    printf("Número par.\n");
  else 
    printf("Número ímpar.\n");

  return 0;
}