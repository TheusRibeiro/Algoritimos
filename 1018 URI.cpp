#include<stdio.h>
int main(void){
    long int valor,aux, nota_100,nota_50,nota_20,nota_10,nota_5,nota_2;
    scanf("%ld",&valor);
    printf("%ld\n",valor);
    nota_100=valor/100;
    aux=valor%100;
    printf("%ld nota(s) de R$ 100,00\n",nota_100);
    nota_50=aux/50;
    aux=aux%50;
    printf("%ld nota(s) de R$ 50,00\n",nota_50);
    nota_20=aux/20;
    aux=aux%20;
    printf("%ld nota(s) de R$ 20,00\n",nota_20);
    nota_10=aux/10;
    aux=aux%10;
    printf("%ld nota(s) de R$ 10,00\n",nota_10);
    nota_5=aux/5;
    aux=aux%5;
    printf("%ld nota(s) de R$ 5,00\n",nota_5);
    nota_2=aux/2;
    aux=aux%2;
    printf("%ld nota(s) de R$ 2,00\n",nota_2);
    printf("%ld nota(s) de R$ 1,00\n",aux);
    return 0;
}

