
#include <stdio.h>

int main(){

  int n1, n2, n3= 0;
  float m = 0;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite o segundo valor: ");
  scanf("%d", &n2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &n3);

  m = (n1 + n2 + n3) / 3;

  printf("O valor da média é: %f\n", m);

  return 0;
  
}
