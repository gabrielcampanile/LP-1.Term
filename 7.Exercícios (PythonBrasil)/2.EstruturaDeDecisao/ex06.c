#include <stdio.h>

int main()
{
  float n1, n2, n3;

  printf("Digite três números diferentes: ");
  scanf("%f" "%f" "%f", &n1, &n2, &n3);

  if(n1>n2 && n1>n3)
    printf("%f é o maior.\n", n1);
  else
    if(n2>n1 && n2>n3)
      printf("%f é o maior.\n", n2);
    else
      printf("%f é o maior.\n", n3);

  return 0;
}