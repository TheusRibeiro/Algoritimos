#include <stdio.h>

int main(){

  float num = 0;
  printf("Digite um valor: ");
  scanf("%f", &num);
  printf("15%% deste valor é: %f\n", (num * 0.15)  );

  return 0;
}
