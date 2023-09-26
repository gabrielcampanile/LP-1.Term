#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 100
int main(){
  int dado[6] = {0,0,0,0,0,0}, lançamento[m];
  srand(time(NULL));
  for(int i=0; i<m; i++){
    lançamento[i] = rand()%6;
    dado[lançamento[i]]++;
  }printf("Nº de aparições em %i lançamentos:\n", m);
  for(int i=0; i<6; i++)
    printf("Face %i: %i\n", i+1, dado[i]);
  return 0;
}