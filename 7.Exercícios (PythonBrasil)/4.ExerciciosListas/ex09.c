// Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a soma dos quadrados dos elementos do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 10

int main(){
  int i, A[max];
  int q, s=0;

  srand(time(NULL));
  printf("Números: ");
  
  for(i=0; i<max; i++){
    A[i] = rand()%21;
    printf("%i ", A[i]);
  }

  printf("\nSoma dos quadrados = ");

  for(i=0; i<max; i++){
    q = A[i] * A[i];
    s+= q;
    if(i==max-1)
      printf("%i = ", q);
    else
      printf("%i + ", q);
  }

  printf("%i\n", s);

  return 0;
}