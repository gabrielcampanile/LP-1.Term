#include <stdio.h>

int main(){
  float F, C;

  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &F);

  C = 5*((F-32)/9);

  printf("Essa temperatura equivale a %.1f graus Celsius.\n", C);

  return 0;
}