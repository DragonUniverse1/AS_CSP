// AS 7th Name decorator
#include <stdio.h>

int main(void){
    char name[25];
    printf("tell me your name: \n");
    scanf("%s", name);
    printf("[%s]\n", name );

    printf("[%s]\n", name);
    strcat(name, " ");

    printf("Hello -x/%s/x-");

    return 0;
}