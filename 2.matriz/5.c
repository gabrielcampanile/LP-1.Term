//Ler uma matriz 6 x 6, contar e escrever quantos valores maiores que 10 ela possui.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 6

int main(){
  int matriz[m][m];
  int i, j, cont=0;

  srand(time(NULL));

  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      matriz[i][j] = rand()%21;
      if(matriz[i][j]>10)
        cont++;
      printf("%i\t", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n%i números maiores que 10.\n", cont);
  
  return 0;
}