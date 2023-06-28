#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define m 128

int main(){
  int v[m], i, k, cont=0;

  srand(time(NULL));

  for(i=0; i<m; i++){
    v[i] = rand()%101;
    printf("%i ", v[i]);
  }

  printf("\n\nk: ");
  scanf("%i", &k);

  for(i=0; i<m; i++){
    if(k==v[i]){
      printf("Posição: %i\n", i+1);
      cont++;
    }
  }

  if(cont==0)
    printf("\nA chave não está no vetor.\n");
}