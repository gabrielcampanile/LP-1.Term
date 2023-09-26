#include <stdio.h>

#define m 10
int main(){
  char letras[m];
  int i, contV = 0;

  for(i=0; i<m; i++){
    printf("Letra %i: ", i+1);
    scanf(" %c", &letras[i]);
    while(!((letras[i]>='A' && letras[i]<='Z') || (letras[i]>='a' && letras[i]<='z'))){
      printf("Digite apenas letras.\n");
      printf("Letra %i: ", i+1);
      scanf(" %c", &letras[i]);
    }
  }

  printf("Letras: ");
  for(i=0; i<m; i++){
    printf("%c ", letras[i]);
    if(letras[i]=='A' || letras[i]=='a' || letras[i]=='E' || letras[i]=='e' || letras[i]=='I' || letras[i]=='i' || letras[i]=='O' || letras[i]=='o' || letras[i]=='U' || letras[i]=='u')
      contV++;
  }

  printf("\n%i vogais.\n", contV);

  return 0;
}