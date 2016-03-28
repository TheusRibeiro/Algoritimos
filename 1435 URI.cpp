#include <stdio.h>
 
int main (){
    int n;
    scanf ("%d",&n);
    while (n!=0){
        int valorini=0, valorfim=n-1, valor=1, matriz[n][n];
        if (n==1) printf ("   1\n   \n");
        else{
        for (int i=0; i<n-1; i++){
            for (int j=valorini; j<=valorfim; j++){
                matriz[valorini][j]=valor;
                matriz[valorfim][j]=valor;
                matriz[j][valorini]=valor;
                matriz[j][valorfim]=valor;
            }
            valor++;
            valorini++;
            valorfim--;
        }
 
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                printf (" ");
                printf ("%3d", matriz[i][j]);
 
            }
            printf ("\n");
        }
 
        printf (" \n");
        }
 
    scanf ("%d",&n);
    }
    return 0;
}
