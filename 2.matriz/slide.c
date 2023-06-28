//Escreva um algoritmo que leia duas matrizes reais de dimensão 3 x 5, calcule e imprima a soma das matrizes.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 3
#define n 5

int main(){
  int m1[m][n], m2[m][n], soma = 0;
  int i, j;

  srand(time(NULL));

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      m1[i][j] = rand()%10;
      m2[i][j] = rand()%10;
      soma+= m1[i][j] + m2[i][j];
    }
  }
  
  printf("Matriz A:\n");
  for(i=0; i<m; i++){
    for(j=0; j<n; j++)
      printf("%i\t", m1[i][j]);
    printf("\n");
  }
  
  printf("Matriz B:\n");
  for(i=0; i<m; i++){
    for(j=0; j<n; j++)
      printf("%i\t", m2[i][j]);
    printf("\n");
  }
  
  printf("Soma das matrizes A e B = %i\n", soma);

  return 0;
}