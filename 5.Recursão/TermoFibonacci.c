#include <stdio.h>

int fib(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("Sequência de Fibonacci:\n");
  printf("%iº termo: %i\n", n, fib(n));

  return 0;
}

int fib(int n){
  if(n==0)
    return 0;
  else if(n==1 || n==2)
    return 1;
  return fib(n-1) + fib(n-2);
}