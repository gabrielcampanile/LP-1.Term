// Ler uma matriz 20 x 20 e um inteiro X. Fazer uma busca de X na matriz e, ao final, escrever sua localização (linha e coluna) ou a mensagem “não encontrado”.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 20
#define n 20

int main(){
  int mat[m][n];
  int i, j, busca, cont = 0;

  srand(time(NULL));
  printf("Matriz:\n");
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      mat[i][j] = rand()%101;
      printf("%i\t", mat[i][j]);
    }
    printf("\n");
  }

  printf("Busca: ");
  scanf("%i", &busca);

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      if(mat[i][j]==busca){
        printf("Posições (%i,%i)\n", i, j);
        cont++; 
      }
    }
  }
  printf("%i aparições.\n", cont);

  if(cont==0)
    printf("Não encontrado.\n");

  return 0;
}