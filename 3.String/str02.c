#include <stdio.h>
#include <string.h>

int main(){
  char texto[50];

  printf("Texto: ");

  fgets(texto, sizeof(texto), stdin);
  texto[strlen(texto)-1] = '\0';

  if(texto[0]>='a' && texto[0]<='z')
    texto[0] = texto[0] - 32;

  for(int i=1; i<strlen(texto); i++){
    if(texto[i]==' ')
      if(texto[i+1]>='a' && texto[i+1]<='z')
        texto[i+1] = texto[i+1] - 32;
  }

  printf("%s\n", texto);

  return 0;
}
