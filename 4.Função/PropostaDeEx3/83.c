// Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20 números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.

#include <stdio.h>
#define v 20

int main(){
  int i, n[v];

  for(i=0; i<v; i++){
    printf("N%i = ", i+1);
    scanf("%i", &n[i]);
  }

  printf("Ordem inversa:\n");
  
  for(i=v-1; i>=0; i--)
    printf("N%i = %i\n", i+1, n[i]);

  return 0;
}