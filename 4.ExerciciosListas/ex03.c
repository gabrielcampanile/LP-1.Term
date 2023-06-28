// Faça um Programa que leia 4 notas, mostre as notas e a média na tela.


#include <stdio.h>

#define MAX 4

int main(){
  float nota[MAX];
  float soma = 0, media;

  for(int i=0; i<MAX; i++){
    do{
      printf("%iª nota: ", i+1);
      scanf("%f", &nota[i]);
      if(nota[i]<0 || nota[i]>10)
        printf("Valor inválido.\n");
    }while(nota[i]<0 || nota[i]>10);
    
    soma+= nota[i];
  }

  media = soma/MAX;

  printf("\n");
  
  for(int i=0; i<MAX; i++)
    printf("Nota %i = %.2f\n", i+1, nota[i]);
  
  printf("\nMédia = %.2f\n", media);

  return 0;
}