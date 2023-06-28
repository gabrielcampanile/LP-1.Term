// Ler uma matriz 6 x 6, contar e escrever quantos valores maiores que 10 ela possui.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 6
#define n 6

int main(){
  int mat[m][n];
  int i, j, c = 0;

  srand(time(NULL));
  printf("Matriz:\n");
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      mat[i][j] = rand()%21;
      printf("%i\t", mat[i][j]);
      if(mat[i][j]>10)
        c++;
    }
    printf("\n");
  }

  printf("Há %i valores maiores que 10 na matriz.\n", c);

  return 0;
}








/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 6
#define N 6

int main(){
  int matriz[M][N];
  int i, j, cont = 0;

  srand(time(NULL));
  printf("Matriz:\n");
  for(i=0; i<M; i++){
    for(j=0; j<N; j++){
      matriz[i][j] = rand()%101;
      printf("%i\n", matriz[i][j]);
    }
  }
}*/