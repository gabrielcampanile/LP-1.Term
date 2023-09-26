#include <stdio.h>

int main() {
  float h, m, w;
  int g;

  printf("Digite sua altura: ");
  scanf("%f", &h);
  printf("Você é homem ou mulher?\nDigite 1 para homem e 2 para mulher.\n");
  scanf("%i", &g);

  m = (72.7*h)-58;
  w = (62.1*h)-44.7;
  
  if(g==1)
    printf("Seu peso ideal seria: %f kg.\n", m);
  else
    printf("Seu peso ideal seria: %f kg.\n", w);
  return 0;
}