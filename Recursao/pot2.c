#include <stdio.h>

int pot2(int);

int main(){
  int p;

  printf("p: ");
  scanf("%i", &p);

  printf("2^%i = %i\n", p, pot2(p));

  return 0;
}

int pot2(int y){
  if(y==0)
    return 1;
  return 2 * pot2(y-1);
}