#include <stdio.h>

int fat(int);

int main(){
  int n;
  
  printf("n: ");
  scanf("%i", &n);

  printf("%i! = %i\n", n, fat(n));

  return 0;
}
int fat(int n){
  if(n==1 || n==0)
    return 1;
  return n * fat(n-1);
}