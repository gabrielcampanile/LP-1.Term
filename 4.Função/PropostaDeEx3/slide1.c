#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 10

int main(){
  int R[m], S[m], X[m], Y[m];
  int i, soma=0;

  srand(time(NULL));
  
  printf("R = ");
  for(i=0; i<m; i++){
    R[i] = rand()%10;
    printf("%i ", R[i]);
    soma+= R[i];
  }

  printf("\nS = ");
  for(i=0; i<m; i++){
    S[i] = rand()%10;
    printf("%i ", S[i]);
    soma+= S[i];
  }

  printf("\nX = ");
  for(i=0; i<m; i++){
    printf("%i%i ", R[i], S[i]);
  }

  printf("\nY = ");
  for(i=0; i<m; i++){
    Y[i] = R[i] * S[i];
    printf("%i ", Y[i]);
  }

  printf("\n");

  return 0;
}