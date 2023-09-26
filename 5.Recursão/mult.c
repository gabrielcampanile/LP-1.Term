#include <stdio.h>

int mult(int, int);

int main(){
  int n1, n2, m;
  
  printf("n1: ");
  scanf("%i", &n1);
  printf("n2: ");
  scanf("%i", &n2);

  m = mult(n1, n2);

  printf("%i x %i = %i\n", n1, n2, m);

  return 0;
}

int mult(int n1, int n2){
  if(n1==0 || n2==0)
    return 0;
  return n1 + mult(n1, n2-1);
}