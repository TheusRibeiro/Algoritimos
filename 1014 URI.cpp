#include <stdio.h> 

int main(){
	int x;
	
	double y, gasto;
	scanf("%d%lf",&x,&y);	
	gasto = x/y;	
	printf("%.3lf km/l\n",gasto);
	return 0;
}
