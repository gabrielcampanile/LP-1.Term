//Nome na vertical em escada invertida. Altere o programa anterior de modo que a escada seja invertida.

#include <stdio.h>
#include <string.h>

int main(){
  char nome[10];

  printf("Digite seu primeiro nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strlen(nome)-1] = '\0';

  for(int i=0; i<strlen(nome)-1; i++){
    for(int j=0; j<=i; j++)
      printf("%c", nome[j]);
    printf("\n");
  }
  for(int i=0; i<strlen(nome); i++){
    for(int j=0; j<strlen(nome)-i; j++)
      printf("%c", nome[j]);
    printf("\n");
  }
  
  return 0;
}