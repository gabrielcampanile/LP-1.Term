// Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define max 5

int main(){
  int i, n[max];
  int s=0, m=1;

  srand(time(NULL));
  printf("Números: ");
  
  for(i=0; i<max; i++){
    n[i] = rand()%11;
    printf("%i ", n[i]);
    s+= n[i];
    m*= n[i];
  }

  printf("\nSoma = %i\nMultiplicação = %i\n", s, m);
  
  return 0;
}