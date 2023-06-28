#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define M 20

int main(){
  int mat[N][M];
  int i, j, busca, cont = 0;

  srand(time(NULL));
  printf("Matriz:\n");
  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      mat[i][j] = rand()%101;
      printf("%i\t", mat[i][j]);
    }
    printf("\n");
  }

  printf("Busca: ");
  scanf("%i", &busca);

  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      if(mat[i][j]==busca){
        printf("\nEncontrado na posição (%i, %i)\n", i, j);
        cont = 1;
      }
    }
  }

  if(!cont)
    printf("Não encontrado.\n");

  return 0;
}