#include <stdio.h>

int main(){
	float num,recebe;
	int i, cont =0;

	for(i=1; i <=6; i++){
		scanf("%f",&num);
		if(num>0){
			recebe=recebe+num;
			cont++;
		}
	}
	recebe=recebe/cont;
	printf("%d valores positivos\n",cont);
	printf("%.1f\n",recebe);
	return 0;
}
