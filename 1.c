#include <stdio.h>
#include <string.h>

int main(){
  char string[50], inverte[50];
  int i, j=0;

  printf("Digite uma frase:\n");
  fgets(string, sizeof(string), stdin);
  fflush(stdin);
  string[strlen(string)-1] = '\0';

  for(i=strlen(string)-1; i>=0; i--){
    inverte[j] = string[i];
    j++;
  }

  printf("Frase invertida:\n");
  printf("%s\n", inverte);

  return 0;
}