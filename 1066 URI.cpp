#include <stdio.h>

int main(){
	int num,i,cont_par=0,cont_impar=0,cont_posi=0,cont_neg=0;
	
	for(i=0;i<=4;i++){
		scanf("%d",&num);
		if(num%2==0){
			cont_par++;
		}
		if(num%2!=0){
			cont_impar++;
		}
		if(num > 0){
			cont_posi++;
		}
		if(num < 0){
			cont_neg++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",cont_par,cont_impar,cont_posi,cont_neg);
	return 0;
}
