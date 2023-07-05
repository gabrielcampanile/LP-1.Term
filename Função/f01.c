#include <stdio.h>

int soma(int x, int y){
  return x + y;
}
int sub(int x, int y){
  return x - y;
}
int mult(int x, int y){
  return x * y;
}
float div(float x, float y){
  return x / y;
}
int main(){
  int n1, n2, a, s, m;
  float d;
  
  printf("n1: ");
  scanf("%i", &n1);
  printf("n2: ");
  scanf("%i", &n2);

  a = soma(n1, n2);
  printf("soma = %i\n", a);

  s = sub(n1, n2);
  printf("sub = %i\n", s);

  m = mult(n1, n2);
  printf("mult = %i\n", m);

  d = div(n1, n2);
  printf("div = %.2f\n", d);

  return 0;
}