#include<stdio.h>

int main(){
    float valor,taxa,acre;
    scanf("%f",&valor);
    if(valor<=2000.00)
        printf("Isento\n");
    else{
        if(valor>2000.00 && valor<=3000.00){
            acre=valor-2000.00;
            taxa=acre/100.00*8.00;
        }
        else if(valor>3000.00 && valor<=4500.00){
            acre=valor-3000.00;
            taxa=acre/100.00*18.00+80.00;
        }
        else{
            acre=valor-4500.00;
            taxa=acre/100.00*28.00+350.00;
        }
        printf("R$ %.2f\n",taxa);
    }
    return 0;
}
