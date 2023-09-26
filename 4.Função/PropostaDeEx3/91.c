// Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se existem números repetidos no vetor VET e em que posições se encontram.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define v 10

int main(){
  int VET[v] = {0, 1, 0, 1, 1, 2, 3, 4, 2, 1};
  int i, j, cont = 0;

  printf("Digite %i números:\n", v);
  srand(1);
  /*for(i=0; i<v; i++){
    VET[i] = rand()%31;
    //scanf("%i", &VET[i])
    printf("n%i: %i\n", i+1, VET[i]);
  }
  */

  printf("\nNúmeros repetidos:\n");
  for(i=0; i<v; i++){
    if(VET[i]>=0){
      cont = 1;
      for(j=i+1; j<v; j++){
        if(VET[i]==VET[j]){
          printf("%i ", j);
          VET[j] = -1;
          cont++;
        }
      }
      if(cont>1)
        printf("\n%i apareceu %i vezes.\n", VET[i], cont);
    }
  }

  if(cont==0)
    printf("Não existem números repetidos no vetor.\n");

  return 0;
}
