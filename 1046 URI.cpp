#include <stdio.h>

int main(){
    int inicio, fim, horas;
   
    scanf("%d%d", &inicio, &fim);
   
    if(inicio > fim){
        horas = 24 - inicio;
        horas = horas + fim;
    } else {
        horas = fim - inicio;
    }
    if( inicio == fim){
        horas = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", horas);
}
