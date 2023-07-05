#include <stdio.h>

int fatorial(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("Fatorial de %i é %i\n", n , fatorial(n));

  return 0;
}

int fatorial(int x){
  for(int i=x-1; i>0; i--){
    x*= i;
  }
  return x;
}