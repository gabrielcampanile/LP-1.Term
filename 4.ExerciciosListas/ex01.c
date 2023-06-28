#include <stdio.h>

#define MAX 5

int main(){
  int vetor[MAX];

  for(int i=0; i<MAX; i++){
    printf("Vetor[%i] = ", i+1);
    scanf("%i", &vetor[i]);
  }
  printf("\n");
  
  for(int i=0; i<MAX; i++)
    printf("Vetor[%i] = %i\n", i+1, vetor[i]);
  
  return 0;
}