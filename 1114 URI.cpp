#include <stdio.h>

int main(){
	int n;

	do{
		scanf("%d",&n);
	if(n==2002){
		printf("Acesso Permitido\n");
	}else{
		printf("Senha Invalida\n");
	}	
		
	}while(n != 2002);
	return 0;	
}
