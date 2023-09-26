#include <stdio.h>

int tribonacci(int);

int main(){
  int n;

  printf("Nº de termos: ");
  scanf("%i", &n);

  printf("Sequência de Tribonacci:\n");

  for(int i=1; i<=n; i++)
    printf("%i\t", tribonacci(i));
  
  printf("\n");

  return 0;
}

int tribonacci(int n){
  if(n==0 || n==1)
    return 0;
  else if(n==2)
    return 1;
  else
    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}