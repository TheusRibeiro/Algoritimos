#include <stdio.h>

int main(){
	char nome[10];
	double sal,c,total;
	
	scanf("%s%lf%lf",&nome,&sal,&c);
	total = sal+c*0.15;
	
	printf("TOTAL = R$ %.2f\n",total);
	
	return 0;
}
