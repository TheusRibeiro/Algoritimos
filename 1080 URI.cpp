#include<stdio.h>

int main(){
    int i,valor,valor_max=0,posicao;
    for(i=1;i<=100;i++){
        scanf("%d",&valor);
        if(valor_max<valor){
            valor_max=valor;
            posicao=i;
        }
    }
    printf("%d\n%d\n",valor_max,posicao);
    return 0;
}
