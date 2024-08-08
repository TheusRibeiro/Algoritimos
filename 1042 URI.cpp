#include <stdio.h>

int main(){
	int num1,num2,num3, aux;
	int vetor[3];
	scanf("%d%d%d",&num1,&num2,&num3);
	
	vetor[0] = num1;
	vetor[1] = num2;
	vetor[2] = num3;
	
	for(int i = 0; i <=2; i++)
		for(int j = 0; j <=2; j++){
		if(vetor[i] < vetor[j] ){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;	
		}
	}
 
	printf("%d\n%d\n%d\n\n%d\n%d\n%d",vetor[0],vetor[1],vetor[2],num1,num2,num3);
	
	return 0;
}
