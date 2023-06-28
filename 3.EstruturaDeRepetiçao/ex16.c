// A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que o valor seja maior que 500

#include <stdio.h>

int main()
{
  int i;
  int p = 0, s = 1, n;

  printf("Série de Fibonacci:\n");
  ./
  do
  {
    n = p + s;
    p = s;
    s = n;
    if(n>=500)
      printf("%i.\n", p);
    else
      printf("%i, ", p); 
  }while(n<=500);

  return 0;
}