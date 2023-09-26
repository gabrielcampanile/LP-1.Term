#include <stdio.h>

int main()
{
  int n1, n2, n3;

  printf("Digite três números diferentes: ");
  scanf("%i" "%i" "%i", &n1, &n2, &n3);

  if(n1>=n2 && n1>=n3)
    printf("%i é o maior e ", n1);
  else
    if(n2>=n1 && n2>=n3)
      printf("%i é o maior e ", n2);
    else
      printf("%i é o maior e ", n3);

  if(n1<=n2 && n1<=n3)
    printf("%i é o menor.\n", n1);
  else
    if(n2<=n1 && n2<=n3)
      printf("%i é o menor.\n", n2);
    else
      printf("%i é o menor.\n", n3);
  
  return 0;
}