#include <stdio.h>

int main(){
	int GH,N;
	float NH,SALARIO;
	
	scanf("%d %d %f",&N,&GH,&NH);	
	SALARIO=GH*NH;
		
	printf("NUMBER = %d\n",N);
	printf("SALARY = U$ %.2f\n",SALARIO);
		
	return 0;
}
