#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
  int n[MAX];
  int i, busca, encontrou = 0;

  srand(time(NULL));
  
  printf("Número: ");
  for(i=0; i<MAX; i++){
    n[i] = rand()%101;
    printf("%i ", n[i]);
  }

  printf("\nBusca: ");
  scanf("%i", &busca);

  for(i=0; i<MAX; i++){
    if(n[i]==busca){
      printf("Encontrado na posição %i.\n", i);
      break;
    }
  }

  if(i==MAX)
    printf("Não encontrado.\n");

  return 0;
}