#include <stdio.h>

int main(){
    int s_t, s_m, e_t, e_m, r_m, r_t;
    scanf("%d %d %d %d", &s_t, &s_m, &e_t, &e_m);
    r_t = e_t - s_t;
    if (r_t < 0){
        r_t = 24 + (e_t - s_t);
    }
    r_m = e_m - s_m;
    if (r_m < 0){
        r_m = 60 + (e_m - s_m);
        r_t--;
    }
    if (e_t == s_t && e_m == s_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", r_t, r_m);
    return 0;
}
