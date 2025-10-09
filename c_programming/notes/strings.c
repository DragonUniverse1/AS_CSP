// AS 7th strings notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Andrew"; // need "" for string and '' for single characters

    char last_name[25]; //[] telling us how many space it is taking up
    printf("tell me you last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);

    printf("%c", last_name[0]);
    last_name[0] = 'M';

    strcat(full_name, " ");
    printf("[%s]\n", full_name);

    strcat(full_name, last_name);
    printf("[%s]\n", full_name);


    printf("your name is %s %s\n", name, last_name);
    prinf("%zu", strlen(name));
    prinf("%zu", sizeof(name));


    return 0;
}

// c is character
// sizeof is part of string
// 