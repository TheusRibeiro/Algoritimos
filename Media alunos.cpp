#include <stdio.h>
#include <stdlib.h>

int main(){
	float mpb, msb;
	float pnpb, snpb, pnsb, snsb;
	float notafinal;
	
	printf("\n ---- Calculando nota UNIME - Itabuna --- \n\n");
	printf("----------------------------------------------\n");
	printf("\t\t Primeiro bimestre");
	printf("\n----------------------------------------------\n\n");

	printf(" Digite a primeira nota: ");
	scanf("%f", &pnpb);
	printf("\n Digite a segunda nota: ");
	scanf("%f", &snpb);
	
	mpb = (pnpb * 0,3) + (snpb * 0,7);
	
	if(mpb >=7){
		printf("\n----------------------------------------------");
		printf("\n Parabens vc foi aprovado no primeiro bimestre com media: %f", mpb);
		printf("\n----------------------------------------------\n\n");
	}else{
		printf("\n----------------------------------------------");
		printf("\n A sua nota foi: %f , melhore no segundo semestre.", mpb);
		printf("\n----------------------------------------------\n\n");
		
	}
	
	printf("----------------------------------------------\n");
	printf("\t\t Segundo bimestre");
	printf("\n----------------------------------------------\n\n");
	
	printf(" Digite a primeira nota: ");
	scanf("%f", &pnsb);
	printf("\n Digite a segunda nota: ");
	scanf("%f", &snsb);
	
	msb = (pnsb * 0,3) + (snsb * 0,7);
	notafinal = (mpb + msb)/2;
	
	system("cls");
	
	if(notafinal >= 7){
		
		printf("------------------------------------------------------------\n");
		printf("\t\t ------ NOTA FINAL ------");
		printf("\n------------------------------------------------------------\n\n");
		
		printf("\n----------------------------------------------");
		printf("\n Parabens vc foi aprovado com Media: %f", notafinal);
		printf("\n----------------------------------------------\n\n");
		
	}else{
		printf("\n----------------------------------------------");
		printf("\n Voce nao conseguiu ser aprovado, Media: %f", notafinal);
		printf("\n----------------------------------------------\n\n");	
	}
	return 0;
}
