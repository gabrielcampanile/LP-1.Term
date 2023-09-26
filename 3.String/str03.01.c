#include <stdio.h>
#include <string.h>

int main(){
  char palavra[30], aux[30];
  int i, cont = 0;

  printf("Palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  palavra[strlen(palavra)-1] = '\0';

  for(i=strlen(palavra)-1; i>=0; i--){
    aux[cont] = palavra[i];
    cont++;
  }

  if(strcmp(palavra, aux)==0)
    printf("É palíndromo.\n");
  else
    printf("Não é palíndromo.\n");

  return 0;
}