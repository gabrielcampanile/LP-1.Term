#include <stdio.h>

int main() {
  float p1, p2, p3, p4, mf;
  char nome[10] = "", s[10] = "";

  printf("Olá, digite seu nome:\n");
  scanf("%s", nome);

  printf("Digite a matéria:\n");
  scanf("%s", s);

  printf("Digite sua primeira nota: ");
  scanf("%f", &p1);
  printf("Digite sua segunda nota: ");
  scanf("%f", &p2);
  printf("Digite sua terceira nota: ");
  scanf("%f", &p3);
  printf("Digite sua última nota: ");
  scanf("%f", &p4);

  mf = (p1 + p2 + p3 + p4)/4;

  printf("\nOlá, %s\n", nome);
  printf("A sua média final em %s será: %.2f.\n\a", s, mf);
  
  return 0;
}