/* Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor. */

#include <stdio.h>
#define v 20

int main(){
  int i, Q[v], m = -1, p = 0;

  for(i=0; i<v; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &Q[i]);
      while(Q[i]<0){
        printf("Valor inválido.\nDigite apenas números positivos: ");
        scanf("%i", &Q[i]);
      }
    if(Q[i]>m){
      m = Q[i];
      p = i;
    }
  }

  printf("O número %i é o maior e é o %iº elemento de Q.\n", m, p+1);

  return 0;
}