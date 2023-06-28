#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, d;
  float x1, x2;

  printf("Vamos calcular as raízes de uma equação do segundo grau, na forma ax^2 + bx + c.\n");
  
  printf("Informe o valor de a: ");
  scanf("%f", &a);

  if(a==0)
  { 
    printf("A equação não é do segundo grau.\n");
    return 0;
  }

  printf("Informe o valor de b: ");
  scanf("%f", &b);

  printf("Informe o valor de c: ");
  scanf("%f", &c);

  d = pow(b,2) - 4*a*c;

  if(d<0)
  {
    printf("A equação não possui raízes reais.\n");
    return 0;
  }

  if(d==0)
  {
    printf("A equação possui apenas uma raíz real.\n");
    x1 = (-b)/(2*a);
    printf("x = %.2f\n", x1);
    return 0;
  }

  if(d>0)
  {
    x1 = (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);
    printf("x1 = %.2f e x2 = %.2f\n", x1, x2);
  }

  return 0;
}
