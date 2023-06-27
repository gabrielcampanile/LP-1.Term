// Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se existem números repetidos no vetor VET e em que posições se encontram.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define v 50

int main(){
  int VET[v];
  int i, j, cont = 0;

  printf("Digite %i números:\n", v);
  srand(time(NULL));
  for(i=0; i<v; i++){
    VET[i] = rand()%101;
    //scanf("%i", &VET[i])
    printf("n%i: %i\n", i+1, VET[i]);
  }

  printf("\nNúmeros repetidos:\n");
  for(i=0; i<v; i++){
    for(j=i+1; j<v; j++){
      if(VET[i]==VET[j]){
        printf("O número %i está presente nas posições %i e %i\n", VET[i], i+1, j+1);
        cont++;
      }
    }
  }

  if(cont==0)
    printf("Não existem números repetidos no vetor.\n");

  return 0;
}
