// AS 7th conditionals notes
#include <stdio.h>
#include <string.h>
/* Logical operators
&& and
|| or
! not
*/

int main(void){
    int grade;
    char name[50];
    printf("what is your grade percent: ");
    scanf("%d", &grade);

    printf("what is your name: ");
    scanf("%s", &name);
    
    //printf("%d", strcmp(name, "Alexa"));
    if(strcmp(name, "Alexa") == 0){
        printf("you dont get a grade!\n");
    }else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >= 80){
        printf("You have a B!\n");
    }else if(grade >= 70){
        printf("You have a C!\n");
    }else{
        printf("You are failing. . .\n");
    }

    return 0;
}
//What puts something inside of the “if” statement?
// {} curly brackets
//How are conditions written in C?
// 
//How do we write elif conditions in C?
//
//When do else conditions run?
//