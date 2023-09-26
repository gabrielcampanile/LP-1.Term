//Escreva uma função que faça a multiplicação de dois números inteiros usando somas e subtrações.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mult(int, int);

int main(){
  int n1, n2;

  /*
  printf("n1: ");
  scanf("%i", &n1);

  printf("n2: ");
  scanf("%i", &n2);
  */

  srand(time(NULL));
  n1 = rand()%11;
  n2 = rand()%11;
  
  mult(n1, n2);
  
  return 0;
}

int mult(int x, int y){
  int m = 0;
  printf("%i x %i = ", x, y);
  if(x==0)
    printf("0\n");
  else if(y<0){
    y*= -1;
    for(int i=0; i<y; i++){
      m+= x;
      if(i==y-1)
        printf("- %i = ", x);
      else
        printf("- %i ", x);
    }
    printf("%i\n", m);
  }
  else if(x<0){
         x*= -1;
         for(int i=0; i<y; i++){
           m+= x;
           if(i==y-1)
             printf("- %i = ", x);
           else
             printf("- %i ", x);
         }
         printf("%i\n", m);
  }
  else{
    for(int i=0; i<y; i++){
      m+= x;
      if(i==y-1)
        printf("%i = ", x);
      else
        printf("%i + ", x);
    }
    printf("%i\n", m);
  }
  return m;
}