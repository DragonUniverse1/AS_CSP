// AS 7th old enough
#include <stdio.h>

int main(void){
    int age;

    printf("how old are you: \n");
    scanf("%d", age);
    if(age <= 4){
        printf("You should not start school yet \n");
    }else if(age == 6){
        printf("You should be in school\n");
    }
    return 0;

}