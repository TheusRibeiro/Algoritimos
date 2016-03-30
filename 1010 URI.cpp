#include <stdio.h>

int main(){
	int codigo,codigo2,np,np2;
	float valor,valor2,total;
	
	scanf("%d%d%f",&codigo,&np,&valor);
	scanf("%d%d%f",&codigo2,&np2,&valor2);
	total=(valor*np)+(valor2*np2);
	printf("VALOR A PAGAR: R$ %.2f\n",total);
	
return 0;	
}
