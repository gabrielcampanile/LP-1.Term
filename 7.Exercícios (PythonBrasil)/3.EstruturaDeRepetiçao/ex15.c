//A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série até o n−ésimo termo.

#include <stdio.h>

int main()
{
  int n;
  int primeiro = 0, segundo = 1, proximo; 

  printf("Escolha o n-ésimo termo: ");
  scanf("%i", &n);

  printf("Série de Fibonacci ate o %d-ésimo termo:\n", n);

  for(int i=1; i<=n; i++)
  {
    proximo = primeiro + segundo;
    primeiro = segundo;
    segundo = proximo;
    if(i==n)
      printf("%i, ...\n", primeiro);
    else
      printf("%i, ", primeiro);
  }

  return 0;
}