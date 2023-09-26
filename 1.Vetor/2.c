//Contar e imprimir o número de ocorrências de um número inteiro fornecido pelo usuário em um dado vetor de inteiros de tamanho variável, também obtido pelo usuário (Obs.: o tamanho máximo do vetor é 100).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int v[10][10], n;
  int i, j, cont = 0;

  srand(time(NULL));

  for(i=0; i<10; i++){
    for(j=0; j<10; j++){
      v[i][j] = rand()%100;
      printf("%i\t", v[i][j]);
    }
    printf("\n");
  }
  
  printf("Busque: ");
  scanf("%i", &n);
  
  for(i=0; i<10; i++)
    for(j=0; j<10; j++)
      if(v[i][j]==n)
        cont++;
  
  printf("%i ocorrência(s).\n", cont);

  return 0;
}