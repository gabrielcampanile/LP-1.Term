#include <stdio.h>

int main(){
  float c, f;

  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &c);

  f = ((c*9)/5)+32;

  printf("Essa temperatura equivale a %f graus Fahrenheit.\n", f);

  return 0;
} 