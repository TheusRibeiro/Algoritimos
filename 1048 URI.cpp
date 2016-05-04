#include <stdio.h>

int main(){
	float salario_atual,aux,novo_salario;
	int p;
	
	scanf("%f", &salario_atual);
	
	if(salario_atual > 0 && salario_atual <= 400){
		p = 15;
		aux = salario_atual*0.15;
	}
	if(salario_atual > 400 && salario_atual  <= 800){
		p = 12;
		aux = salario_atual*0.12;
	}
	if(salario_atual > 800 && salario_atual  <= 1200){
		p = 10;
		aux = salario_atual*0.10;	
	}
	if(salario_atual > 1200 && salario_atual  <= 2000){
		p = 7;
		aux = salario_atual*0.07;
	}
	if(salario_atual > 2000){
		p = 4;
		aux = salario_atual*0.4;	
	}
	novo_salario = salario_atual + aux;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",novo_salario,aux,p,'%');
	
	return 0; 
}
