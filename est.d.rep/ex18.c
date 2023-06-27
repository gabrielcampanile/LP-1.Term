#include <stdio.h>

int main()
{
  int n, conj, maior, menor, soma;

  printf("Quantos números deseja avaliar? ");
  scanf("%i", &conj);
  
  printf("Digite um número: ");
  scanf("%i", &n);
  maior = n;
  menor = n;
  soma = n;
  
  for(int i=0; i<conj-1; i++)
  {
    printf("Digite um número: ");
    scanf("%i", &n);
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