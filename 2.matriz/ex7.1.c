// Ler uma matriz 8 x 8 e transformá-la em uma matriz triangular inferior, atribuindo zero a todos os elementos acima da diagonal principal (ou seja, dada uma matriz A, para qualquer i > j, A[i,j] = 0). Imprimir a matriz no final.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 8
#define n 8

int main(){
  int mat[m][n];
  int i, j;

  srand(time(NULL));
  printf("Matriz inicial:\n");
  
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      mat[i][j] = rand()%100;
      printf("%i\t", mat[i][j]);
    }
    printf("\n");
  }

  printf("Matriz atualizada:\n");
  
  for(i=0; i<m-1; i++)
    for(j=i+1; j<n; j++)
      mat[i][j] = 0;
  
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      printf("%i\t", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}