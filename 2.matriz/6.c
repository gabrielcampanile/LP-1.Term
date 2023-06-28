//Ler uma matriz 20 x 20 e um inteiro X. Fazer uma busca de X na matriz e, ao final, escrever sua localização (linha e coluna) ou a mensagem “não encontrado”.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 20

int main(){
  int matriz[m][m];
  int i, j, X, cont=0;

  srand(time(NULL));

  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      matriz[i][j] = rand()%100;
      printf("%i\t", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Busca: ");
  scanf("%i", &X);

  for(i=0; i<m; i++){
    for(j=0; j<m; j++){ 
      if(matriz[i][j]==X){
        printf("Posição (%i, %i)\n", i+1, j+1);
        cont++;
      }
    }
  }
  if(cont==0)
    printf("Não encontrado.\n");
  
  return 0;
}