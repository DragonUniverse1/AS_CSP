// AS 7th old enough
#include <stdio.h>

int main(void){
    int age;

    printf("how old are you: \n");
    scanf("%d", &age);
    if(age <= 5){
        printf("Go play in the dirt little child dork \n");
    }else if(age <= 7){
        printf("You should be in school\n");
    }else if(age <= 16){
        printf("You should get a learners permit\n");
    }else if(age <= 17){
        printf("You should be able to drive\n");
    }else if(age <= 19){
        printf("You should be able to vote\n");
    }else{
        printf("I'm sorry, but I don't think you exist yet\n");
    }

    return 0;
}