#include <string.h>
#include <stdio.h>

int main(){
  char texto[100], a[10], b[10], c[10], d[1]={""}, novo[100]={""};
  int i, j, k;

  printf("Digite uma frase: ");
  fgets(texto, sizeof(texto), stdin);
  texto[strlen(texto)-1] = '\0';

  strcpy(a, "para");
  strcpy(b, "e tente");

  
  for(i=0; i<strlen(texto); i++){
    if(texto[i]=='p' && texto[i+1]=='a' && texto[i+2]=='r' && texto[i+3]=='a'){
      strcat(novo, b);
      i = i+3;
    }
    else{
      c[0] = texto[i];
      strcat(novo, c);
    }
  }

  printf("%s\n", novo);
  
  return 0;
}
 