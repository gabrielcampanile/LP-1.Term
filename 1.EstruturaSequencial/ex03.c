#include <stdio.h>

int main() {
  float n1, n2, soma;
 
  printf("Digite um valor: ");
  scanf("%f", &n1);
  printf("Digite outro valor: ");
  scanf("%f", &n2);
  soma = n1 + n2;
  
  printf("A soma dos valores digitados é %f.\n", soma);
  return 0;
}