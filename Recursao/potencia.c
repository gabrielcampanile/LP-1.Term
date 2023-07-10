#include <stdio.h>

int pot(int, int);

int main(){
  int n, p;

  printf("n: ");
  scanf("%i", &n);

  printf("p: ");
  scanf("%i", &p);

  printf("%i^%i = %i\n", n, p, pot(n, p));

  return 0;
}

int pot(int x, int y){
  if(y==0)
    return 1;
  return x * pot(x, y-1);
}