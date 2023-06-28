/* Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M. */

#include <stdio.h>
#define v 10

int main(){
  int i, X, A[v], M[v];
  
  for(i=0; i<v; i++){
    printf("%iº A: ", i+1);
    scanf("%i", &A[i]);
  }

  printf("Digite um valor para X: ");
  scanf("%i", &X);

  for(i=0; i<v; i++){
    M[i] = A[i] * X;
    printf("%i * %i = %i\n", A[i], X, M[i]);
  }
  
  return 0;
}