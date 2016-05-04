#include <stdio.h>

int main(){
	int i,j;
	int in= -2,on= 65;
	
	for(i=0;i<=12;i++){
		
		in = in + 3;
		on = on-5;
		printf("I=%d J=%d\n",in,on);	
	}
	return 0;
}
