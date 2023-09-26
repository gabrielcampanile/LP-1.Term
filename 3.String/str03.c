#include <stdio.h>
#include <string.h>

int main(){
  char texto[30];

  printf("Palavra: ");
  fgets(texto, sizeof(texto), stdin);
  texto[strlen(texto)-1] = '\0';

  for(int i=0; i<strlen(texto); i++){
    if(texto[i]!=texto[strlen(texto)-1-i]){
      printf("Não é palíndromo.\n");
      return 0;
    }
  }
  printf("É palíndromo.\n");
  return 0;
}