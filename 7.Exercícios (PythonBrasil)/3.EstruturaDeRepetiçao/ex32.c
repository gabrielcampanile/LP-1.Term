// Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:

#include <stdio.h>

int main()
{
  int n, fat = 1;

  printf("Digite um número inteiro positivo: ");
  scanf("%i", &n);

  printf("Fatorial de %i:\n%i! = ", n, n);

  for(int i=1; i<=n; i++)
  {
    fat = fat * i;
    if(i==n)
      printf("%i = %i\n", i, fat);
    else
      printf("%i . ", i);
  }
  if(n==0)
      printf("1\n");

  return 0;
}