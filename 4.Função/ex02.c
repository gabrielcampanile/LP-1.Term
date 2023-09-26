//Escreva uma função que faça a divisão de dois números inteiros usando somas e subtrações.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int divisao(int, int);

int main(){
  int n1, n2;
  
  printf("n1: ");
  scanf("%i", &n1);

  printf("n2: ");
  scanf("%i", &n2);

  divisao(n1, n2);

  return 0;
}

int divisao(int x, int y){
  int div = x, cont = 0;
  if(x==0 && y!=0){
    printf("%i / %i = 0\n", x, y);
    return 0;
  }
  else if(x!=0 && y==0){
    printf("%i / %i = INDEFINIDO\n", x, y);
    return 0;
  }
  else if(x==0 && y==0){
    printf("%i / %i = INDEFINIDO\n", x, y);
    return 0;
  }
  else if(x<0 && y>0){
    div*= -1;
    while(div>=y){
      div-= y;
      cont++;
    }
    cont*= -1;
  }
  else if(y<0 && x>0){
    div*=-1;
    while(div>=y){
      div-= y;
      cont++;
    }
    cont*= -1;
  }
  else{
    while(div>=y){
      div-= y;
      cont++;
    }
  }
  if(div==0)
    printf("%i / %i = %i\n", x, y, cont);
  else
    printf("%i / %i = %i + %i/%i\n", x, y, cont, div, y);
  return cont;
}