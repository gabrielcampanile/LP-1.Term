#include <stdio.h>

int fatorial(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("%i! = %i\n", n, fatorial(n));

  return 0;
}

int fatorial(x){
  int fat = 1;
  for(int i=1; i<=x; i++){
    fat*= i;
  }
  return fat;
}