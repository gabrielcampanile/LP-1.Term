#include <stdio.h>

int main()
{
  float n1, n2;

  printf("Digite dois números: ");
  scanf("%f" "%f", &n1, &n2);

  if(n1>n2)
    printf("%.2f é maior.\n", n1);
  else
    printf("%.2f é maior.\n", n2);

  return 0;
}