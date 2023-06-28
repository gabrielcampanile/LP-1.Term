#include <stdio.h>

int main()
{
  int a;

  printf("Digite um ano: ");
  scanf("%i", &a);

  if((a%4==0 && a%100!=0) || a%400==0)
    printf("Ano bissexto.\n");
  else
    printf("Não é bissexto.\n");

  return 0;
}