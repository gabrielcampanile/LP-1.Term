// Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.

#include <stdio.h>

#define v 30

int main(){
  int i, n[v], x, c = 0;

  printf("Digite %i números:\n", v);

  for(i=0; i<v; i++){
    printf("n%i: ", i+1);
    scanf("%i", &n[i]);
  }

  printf("Agora digite um número qualquer: ");
  scanf("%i", &x);

  for(i=0; i<v; i++)
    if(n[i]==x)
      c++;

  printf("O número %i aparece %i vez(es) no vetor.\n", x, c);

  return 0;
}