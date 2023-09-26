// Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.

#include <stdio.h>

#define v 15

int main(){
  int i, V1[v], V2[v], rep = 0;

  printf("Valores de V1:\n");

  for(i=0; i<v; i++){
    printf("%i° V1: ", i+1);
    scanf("%i", &V1[i]);
  }

  printf("\nValores de V2:\n");
  
  for(i=0; i<v; i++){
    printf("%i° V2: ", i+1);
    scanf("%i", &V2[i]);
    if(V2[i]==V1[i])
      rep++;
  }

  if(rep!=0)
    printf("\nV1 e V2 possuem %i números iguais e na mesma posição.\n", rep);
  else
    printf("V1 e V2 não possuem números iguais e na mesma posição.\n");

  return 0;
}