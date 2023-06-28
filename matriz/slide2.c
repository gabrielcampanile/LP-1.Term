//Dada uma matriz mat de inteiros com 4 x 5 elementos, faça um algoritmo para somar os elementos de cada linha gerando o vetor somalinha. Em seguida, some os valores dos elementos do vetor em uma variável total, que deve ser impressa ao final.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 4
#define n 5

int main(){
  int mat[m][n], soma[m] = {0}, total = 0;
  int i, j;

  srand(time(NULL));

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      mat[i][j] = rand()%10;
      soma[i]+= mat[i][j];
      printf("%i\t", mat[i][j]);
    }
    total+= soma[i];
    printf("=\t%i\n", soma[i]);
  }
  printf("\nTotal = %i\n", total);
  
  return 0;
}