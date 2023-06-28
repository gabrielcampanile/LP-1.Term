//Escreva um algoritmo que permita a leitura dos nomes de 10 pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo deve permitir a leitura de mais 1 nome qualquer de pessoa e depois escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.

#include <stdio.h>
#include <string.h>

#define m 5
#define n 50

int main(){
  char nomes[m][n], nome[n];
  int i, j, cont = 0;

  for(i=0; i<m; i++){
    printf("Nome %i: ", i+1);
    scanf("%[^\n]s", nomes[i]);
    getchar();
  }

  printf("\nBusque: ");
  scanf("%[^\n]s", nome);
  getchar();

  for(i=0; i<m; i++){
    if(strcmp(nome, nomes[i])==0)
      cont++;
  }

  if(cont!=0)
    printf("\nACHEI\n");
  else
    printf("\nNÃO ACHEI\n");

  return 0;
}