#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("Alô mundo! \n\n");

    system("PAUSE");
    return 0;
}
