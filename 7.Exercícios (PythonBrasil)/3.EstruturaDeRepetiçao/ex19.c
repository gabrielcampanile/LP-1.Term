#include <stdio.h>

int main()
{
  int N, n, maior, menor, soma;

  printf("Quantos números deseja avaliar? ");
  scanf("%i", &N);

  printf("Digite um número: ");
  scanf("%i", &n);

  while(n<0 || n>1000)
  {
    printf("Valor inválido.\n");
    printf("Digite um número: ");
    scanf("%i", &n);
  }

  maior = n;
  menor = n;
  soma = n;

  for(int i=0; i<N-1; i++)
  {
    printf("Digite um número: ");
    scanf("%i", &n);

    while(n<0 || n>1000)
    {
      printf("Valor inválido.\n");
      printf("Digite um número: ");
      scanf("%i", &n);
    }

    if(n>maior)
      maior = n;
    if(n<menor)
      menor = n;

    soma = soma + n;
  }

  printf("Maior = %i\n", maior);
  printf("Menor = %i\n", menor);
  printf("Soma = %i\n", soma);

  return 0;
}