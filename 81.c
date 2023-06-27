// O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e a respectiva posição dele nesse vetor.

#include <stdio.h>
#define v 20

int main(){
  int i, Q[v], m, p = 0;

  printf("Digite o 1º número: ");
  scanf("%i", &Q[0]);
  while(Q[0]<0){
    printf("Valor inválido.\nDigite apenas números positivos: ");
    scanf("%i", &Q[0]);
  }
  
  m = Q[0];

  for(i=1; i<v; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &Q[i]);
    while(Q[i]<0){
      printf("Valor inválido.\nDigite apenas números positivos: ");
      scanf("%i", &Q[i]);
    }

    if(Q[i]<m){
      m = Q[i];
      p = i;
    }
  }

  printf("%i é o menor valor e é o %iº elemento de Q.\n", m, p+1);
  
  return 0;
}