#include <stdio.h>

int main()
{
  int n;
  float H = 0;

  printf("Digite um valor para n: ");
  scanf("%i", &n);

  for(int i=1; i<=n; i++)
  {
    H = (1.0/i) + H;
  }

  printf("H = %.2f\n", H);
  
  return 0;
}