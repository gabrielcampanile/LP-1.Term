#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8
#define M 8

int main(){
  int mat[N][M];
  int i, j;

  srand(time(NULL));
  printf("Matriz:\n");
  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      mat[i][j] = rand()%100;
      printf("%i\t", mat[i][j]);
    }
    printf("\n");
  }

  for(i=0; i<N-1; i++)
    for(j=i+1; j<M; j++)
      mat[i][j] = 0;

  printf("Matriz:\n");
  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      printf("%i\t", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}