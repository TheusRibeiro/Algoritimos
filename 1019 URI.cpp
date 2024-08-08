#include<stdio.h>

int main(){
    long int valor, hora, minuto, segundo;
    scanf("%ld",&valor);
    hora=valor/3600;
    segundo=valor%3600;
    minuto=segundo/60;
    segundo=segundo%60;
    printf("%ld:%ld:%ld\n",hora,minuto,segundo);
    
    return 0;
}
