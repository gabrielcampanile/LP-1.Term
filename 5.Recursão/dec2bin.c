#include <stdio.h>

void dec2bin(int);

int main(){
  int n;

  printf("n: ");
  scanf("%i", &n);

  printf("binário: ");
  dec2bin(n);
  printf("\n");

  return 0;
}

void dec2bin(int n){
  if(n/2==0)
    printf("%i", n%2);
  else{
    dec2bin(n/2);
    printf("%i", n%2);
  }
}