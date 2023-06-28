#include <stdio.h>
#include <string.h>
#define m 5

int main(){
  char nome[m][30], busca[30];
  int i;

  printf("Nomes:\n");
  for(i=0; i<m; i++){
    fgets(nome[i], sizeof(nome[i]), stdin);
    nome[i][strlen(nome[i])-1] = '\0';
  }

  printf("\nBusca: ");
  fgets(busca, sizeof(busca), stdin);
  busca[strlen(busca)-1] = '\0';
  
  for(i=0; i<m; i++){ 
    if(strcmp(busca, nome[i])==0){
      printf("Encontrado na posição %i\n", i+1);
      return 0;
    }
  }

  printf("Não encontrado.\n");

  return 0;
}