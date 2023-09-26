#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

int main(){
  int n[M], p[M], i[M];
  int cp = 0, ci= 0;
  int j;
  
  srand(time(NULL));
  printf("Números: ");
   
  for(j=0; j<M; j++){
    n[j] = rand()%101;
    printf("%i ", n[j]);
  }

  for(j=0; j<M; j++){
    if(n[j]%2==0){
      p[cp] = n[j];
      cp++;
    }
    else{
      i[ci] = n[j];
      ci++;
    }
  }

  printf("\nPares: ");
  for(j=0; j<cp; j++)
    printf("%i ", p[j]);

  printf("\nÍmpares: ");
  for(j=0; j<ci; j++)
    printf("%i ", i[j]);
  
  return 0;
}