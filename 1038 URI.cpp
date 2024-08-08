#include <stdio.h>

int main(){
	int op, qt;
	float t;
	scanf("%d%d",&op,&qt);
	
	switch (op){
	
		case 1:
			t = qt*4.00;
			break;
		case 2:
			t = qt*4.50;
			break;
		case 3:
			t = qt*5.00;
			break;		
		case 4:
			t = qt*2.00;
			break;
		case 5:
			t = qt*1.50;
			break;
	}
	printf("Total: R$ %.2f\n",t);
	
	return 0;
}
