// AS 7th function notes
#include <stdio.h>
void birthday(char* name, int age){// * means all
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy birthday %s, you are %d!\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have: ", type);
    scanf("%f", &value);
    return value;
}

int main(void){// void is data type we are returning
    birthday("Mother", 46);
    birthday("Gwen", 14);
    birthday("Cecily", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(6,7));
    float pencils = get_number("Pencils");
    float notebooks = get_number("notebooks");
    printf("You have %.2f pencils and %.f notebooks!", pencils, notebooks);
    return 0;
}

/* What a function is
    sections of codes that were written to be used several times in a code
Why we use functions
    to simplify our codes so we don't have to write the same thing over and over again
How to write a function in C

What are arguments and parameters?
    parameter is a peice of info that is required for a funtion to run like a variable
    arguments is a partner/value of the parameter to run a function
How do arguments and parameters work together?

How to use parameters and arguments in C

What are return statements?
    outputs inside of a function to locate where the function was called
How do return statements change how you define a function in C?

What do return statements do with the information?

*/
