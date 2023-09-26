#include <stdio.h>

int fibonacci(int);
void PrintFibonacci(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  PrintFibonacci(n);

  return 0;
}

int fibonacci(x){
  int fat, fat1=1, fat2=0;
  for(int i=0; i<x; i++){
    fat = fat1 + fat2;
    fat1 = fat2;
    fat2 = fat;
  }
  return fat;
}

void PrintFibonacci(x){
  for(int i=0; i<x; i++){
    printf("%i\t", fibonacci(i));
  }
  printf("\n");
}