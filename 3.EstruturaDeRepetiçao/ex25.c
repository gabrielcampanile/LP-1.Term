// Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.

#include <stdio.h>

int main()
{
  int n, i, s = 0, m = 0;

  printf("Quantas pessoas deseja avaliar? ");
  scanf("%i", &n);

  for(int j=1; j<=n; j++)
  {
    printf("Digite a idade: ");
    scanf("%i", &i);
    s+=i;
  }

  m = s/n;

  printf("A média de idade das pessoas avaliadas foi de %i anos.\n", m);
  
  if(m<=25)
    printf("Turma jovem.\n");
  else if(m>=26 && m<=60)
    printf("Turma adulta.\n");
  else
    printf("Turma idosa.\n");

  return 0;
}