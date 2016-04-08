#include <stdio.h>

int main(){
    int a,i;

    scanf("%d",&a);
    for(i=0;i<a*4;i+=4){
        printf("%d %d %d PUM\n",i+1,i+2,i+3);
    }
    return 0;
}
