// Declarar uma matriz 5 x 5 e preencher com 1s a diagonal principal e com 0s os demais elementos. No final, escreva a matriz obtida.
 #include <stdio.h>

#define n 5
#define m 5

int main(){
  int matriz[n][m];
  int i, j;

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      if(j==i)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
      printf("%i\t", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}