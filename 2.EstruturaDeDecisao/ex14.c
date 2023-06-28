#include <stdio.h>

int main()
{
  float p1, p2, m;
 
  printf("Digite sua primeira nota: ");
  scanf("%f", &p1);

  while(p1<0 || p1>10)
  {
    printf("Valor inválido. Digite novamente: ");
    scanf("%f", &p1);
  }

  printf("Digite sua segunda nota: ");
  scanf("%f", &p2);

  while(p2<0 || p2>10)
  {
    printf("Valor inválido. Digite novamente: ");
    scanf("%f", &p2);
  }
  
  m = (p1+p2)/2;

  if(m>=9.0 && m<=10)
    printf("Sua média de aproveitamento foi %.2f\nConceito A!\n", m);
  else if(m>=7.5 && m<9)
    printf("Sua média de aproveitamento foi %.2f\nConceito B!\n", m);
  else if(m>=6 && m<7.5)
    printf("Sua média de aproveitamento foi %.2f\nConceito C!\n", m);
  else if(m>=4 && m<6)
    printf("Sua média de aproveitamento foi %.2f\nConceito D!\n", m);
  else
    printf("Sua média de aproveitamento foi %.2f\nConceito E!\n", m);

  return 0;
}