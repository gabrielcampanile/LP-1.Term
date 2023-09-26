#include <stdio.h>

int main()
{
  int n, m = 1;
  float s;

  printf("Digite um valor para n: ");
  scanf("%i", &n);

  printf("s = ");
  for(int i=1; i<=n; i++)
  {
    s = (float)i/m + s;
    if(i==n)
        printf("%i/%i = %.2f ", i, m, s);
    else
      printf("%i/%i + ", i, m);
    m+=2;
  }
  printf("\n");

  return 0;
}