#include <stdio.h>

int main(){
  char letra;

  printf("Letra: ");
  scanf("%c", &letra);

  if((letra>=65 && letra<=90) || (letra>=97 && letra<=122))
  {
    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' || letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
      printf("Vogal.\n");
    else
      printf("Consoante.\n");
  }
  else
    printf("Não é letra.\n");
  
  return 0;
}