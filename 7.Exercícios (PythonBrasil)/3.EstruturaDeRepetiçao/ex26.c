// Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.

#include <stdio.h>

int main()
{
  int n, v, b = 0, c1 = 0, c2 = 0, c3 = 0;

  printf("Digite o número total de eleitores: ");
  scanf("%i", &n);

  printf("Candidatos:\n13 - Luladrão\n17 - Bolsonaro\n69 - Danilo Gentili\n00 - Voto nulo\n");
  
  for(int i=1; i<=n; i++)
  {
    printf("Digite o número do seu candidato: ");
    scanf("%i", &v);
    while(v!=13 && v!=17 && v!=69 && v!=00)
    {
      printf("Número inválido. Digite novamente: ");
      scanf("%i", &v);
    }
    if(v==00)
      b++;
    if(v==13)
      c1++;
    if(v==17)
      c2++;
    if(v==69)
      c3++;
  }

  printf("Resultado das eleições:\nLuladrão = %i votos\nBolsolindo = %i votos\nDanilo Gentalha = %i votos\nVotos nulos = %i votos\n", c1, c2, c3, b);

  if(c1>c2 && c1>c3)
    printf("Luladrão foi eleito.\n");
  else if(c2>c1 && c2>c3)
    printf("Bolsomito foi eleito!\n");
  else if(c3>c1 && c3>c2)
    printf("A comédia venceu!\n");
  else
    printf("A eleição será levada para o 2º turno.\n");

  return 0;
}