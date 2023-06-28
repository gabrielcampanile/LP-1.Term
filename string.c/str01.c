#include <stdio.h>
#include <string.h>

int main(){
  char texto[30];
  int i, cont = 0;

  printf("Texto: ");
  fgets(texto,sizeof(texto),stdin);
  texto[strlen(texto)-1] = '\0';

  for(i=0; i<strlen(texto); i++){
    if(texto[i]=='a'){
      cont++;
      texto[i] = 'b';
    }
  }

  printf("%i modificações.\n", cont);
  printf("%s\n", texto);
  
  return 0;
}