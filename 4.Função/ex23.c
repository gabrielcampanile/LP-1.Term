// Escreva uma função que receba dois números x e y, com x < y, e imprima quais números nesse intervalo que divididos por 13 dão um resto igual a 5.

#include <stdio.h>

int resto5(int);
void imprima(int, int);

int main(){
  int n1, n2;

  printf("n1: ");
  scanf("%i", &n1);

  do{
    printf("n2: ");
    scanf("%i", &n2);
    if(n2<n1)
      printf("Valor inválido.\n");
  }while(n2<n1);

  printf("Números entre %i e %i que divididos por 13 dão um resto igual a 5:\n", n1, n2);
  imprima(n1, n2);
  printf("\n");
  
  return 0;
}

int resto5(int n){
  if(n%13==5)
    return 1;
  return 0;
}

void imprima(int x, int y){
  for(int i=x; i<=y; i++){
    if(resto5(i))
      printf("%i\t", i);
  }
}