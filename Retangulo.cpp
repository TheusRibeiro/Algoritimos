#include <stdio.h>
#include <stdlib.h>

/*        
           L2
     ---------------
    |               |
 L1 |               | L3
    |               |
    |_______________|
    
           L4
*/

int main(){
    
    int l1,l2,l3,l4 = 0;
    
    printf("Digite o valor do lado 1: ");
    scanf("%d", &l1);
    printf("Digite o valor do lado 2: ");
    scanf("%d", &l2);    
    printf("Digite o valor do lado 3: ");
    scanf("%d", &l3);
    printf("Digite o valor do lado 4: ");
    scanf("%d", &l4);
    
    printf("Lado 1: %d\nLado 2: %d\nLado 3: %d\nLado 4: %d\n", l1, l2, l3, l4);
    
    if( l1 == l2 && l2 == l3 && l3 == l4 ){
      
      printf("Quadrado\n");
          
    } else if( l1 == l3 && l2 == l4 ){
           
      printf("Retangulo\n");      
      
    } else {
           
       printf("Figura nao conhecida\n");           
           
    }
 
    system("pause");
    
    return 0;   
}
