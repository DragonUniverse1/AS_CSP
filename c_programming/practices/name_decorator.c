// AS 7th Name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[25];

    printf("tell me your name: \n");
    scanf("%s", name);
    char name1[22];
    strcat(name1, name);

    printf("Hello <<< %s >>>", name, name1);

    return 0;
}