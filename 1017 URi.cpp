#include <stdio.h>

int main () {
   float veloc, tempo, litros;
   scanf("%f%f", &tempo,&veloc);
   litros=(tempo*veloc)/12;
   printf("%.3f\n", litros);
   
   return 0;
}
