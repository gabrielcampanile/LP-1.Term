#include <stdio.h>
#include <math.h>

int main() 
{
  float s, v, t;

  printf("Informe o tamanho do arquivo para download (em MB):");
  scanf("%f", &s);

  printf("Informe a velocidade de um link de Internet (em Mbps): ");
  scanf("%f", &v);

  t = (s/(v/8))/60;

  printf("O tempo de download do arquivo usando este link será de aproximadamente %.0f minuto(s).\n", t);

  return 0;
}