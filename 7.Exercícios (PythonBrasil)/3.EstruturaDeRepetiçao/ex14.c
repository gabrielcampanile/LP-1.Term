#include <stdio.h>

int main()
{
  int n, contPar=0, contImpar=0;

  for(int i=0; i<10; i++)
  {
    printf("Digite um número: ");
    scanf("%i", &n);
    if(n%2==0)
      contPar++;
    else
      contImpar++;
  }

  printf("Pares = %i\n", contPar);
  printf("Ímpares = %i\n", contImpar);

  return 0;
}