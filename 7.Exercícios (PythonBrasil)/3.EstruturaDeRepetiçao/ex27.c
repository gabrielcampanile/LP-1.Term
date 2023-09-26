// Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.

#include <stdio.h>

int main()
{
  int t, a, s = 0;
  float m;

  printf("Digite o número de turmas: ");
  scanf("%i", &t);

  for(int i=1; i<=t; i++)
  {
    printf("Quantos alunos há na %iª turma? ", i);
    scanf("%i", &a);
    while(a<0 || a>40)
    {
      printf("Número inválido. Digite novamente: ");
      scanf("%i", &a); 
    }
    s+=a;
  }

  m = (float)s/t;

  printf("O número médio de alunos por turma é de %.0f alunos.\n", m);

  return 0;
}