// Escreva uma função que receba três valores inteiros e retorne 0 se esses não formam um triângulo, 1 se o triângulo é equilátero, 2 se é isósceles e 3 se é escaleno.

#include <stdio.h>
#include <stdlib.h>

int triangle(int, int, int);

int main(){
  int l1, l2, l3, cond;

  printf("L1: ");
  scanf("%i", &l1);
  
  printf("L2: ");
  scanf("%i", &l2);
  
  printf("L3: ");
  scanf("%i", &l3);

  cond = triangle(l1, l2, l3);

  if(cond==0)
    printf("Não formam um triângulo.\n");
  else if(cond==1)
    printf("Triângulo equilátero.\n");
  else if(cond==2)
    printf("Triângulo isóceles.\n");
  else
    printf("Triângulo escaleno.\n");
  
  return 0;
}

int triangle(int x, int y, int z){
  if(x>=y+z || y>=x+z || z>=x+y)
    return 0;
  if(x<=0 || y<=0 || z<=0)
    return 0;
  if(x<=abs(y-z) || y<=abs(x-z) || z<=abs(x-y))
    return 0;
  if(x== y && y==z)
    return 1;
  if((x==y && x!=z) || (x==z && x!=y) || (y==z && y!=x))
    return 2;
  return 3;
}