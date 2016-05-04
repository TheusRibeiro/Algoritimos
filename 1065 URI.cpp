#include <stdio.h>

int main(){
	int num,i,cont=0;
	
	for(i=0;i<=4;i++){
		scanf("%d",&num);
		if(num%2==0){
			cont++;
		}
	}
	printf("%d valores pares\n",cont);
	return 0;
}
