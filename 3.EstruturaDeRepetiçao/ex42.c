// Faça um programa que leia uma quantidade indeterminada de números positivos e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deverá terminar quando for lido um número negativo.

#include <stdio.h>

int main()
{
  int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

  while(n>=0)
  {
    printf("Digite um número: ");
    scanf("%i", &n);
    if(n>=0 && n<=25)
      c1++;
    else if(n>=26 && n<=50)
      c2++;
    else if(n>=51 && n<=75)
      c3++;
    else if(n>=76 && n<=100)
      c4++;
  }

  printf("1º intervalo: %i números\n", c1);
  printf("2º intervalo: %i números\n", c2);
  printf("3º intervalo: %i números\n", c3);
  printf("4º intervalo: %i números\n", c4);

  return 0;
}