#include <stdio.h>

#define MAX 10

int main(){
  int n[MAX];

  for(int i=0; i<MAX; i++){
    printf("n[%i] = ", i+1);
    scanf("%i", &n[i]);
  }
  printf("\n");

  for(int i=MAX-1; i>=0; i--)
    printf("n[%i] = %i\n", i+1, n[i]);
  
  return 0;
}