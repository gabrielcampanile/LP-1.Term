#include <stdio.h>
#include <math.h>

int main() {
  int n1, n2, a;
  float b, c, n3;

  printf("Digite um valor inteiro: ");
  scanf("%i", &n1);
 
  printf("Digite mais um valor inteiro: ");
  scanf("%i", &n2);
  
  printf("Digite um número pertencente aos Reais: ");
  scanf("%f", &n3);

  a = (2*n1)*(n2/2);
  b = (3*n1)+n3;
  c = pow((double)n3,3);

  printf("a. %i\n", a);
  printf("b. %f\n", b);
  printf("c. %f\n", c);

  return 0;
}