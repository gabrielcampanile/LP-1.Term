//Ler uma matriz 8 x 8 e transformá-la em uma matriz triangular inferior, atribuindo zero a todos os elementos acima da diagonal principal (ou seja, dada uma matriz A, para qualquer i > j, A[i,j] = 0). Imprimir a matriz no final.

#include <stdio.h>
#define m 8
int main(){
  int matriz[m][m];
  int i, j;

  for(i=0; i<m; i++)
    for(j=0; j<m; j++)
      matriz[i][j] = 1;
  
  for(i=0; i<m; i++)
    for(j=i+1; j<m; j++)
      matriz[i][j] = 0;
  
  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      printf("%i\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}