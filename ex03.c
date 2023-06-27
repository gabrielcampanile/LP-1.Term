#include <stdio.h>

#define MAX 4

int main(){
  float nota[MAX];
  float soma = 0, media;

  for(int i=0; i<MAX; i++){
    printf("%iª nota: ", i+1);
    scanf("%f", &nota[i]);
    soma+= nota[i];
  }

  media = soma/MAX;

  printf("\n");
  
  for(int i=0; i<MAX; i++)
    printf("Nota %i = %.2f\n", i+1, nota[i]);
  
  printf("Média = %.2f\n", media);

  return 0;
}