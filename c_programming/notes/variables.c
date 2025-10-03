// AS 7th Variables Notes!
#include <stdio.h>

int main(void){
    int grade; //4 bytes -> placeholder d
    const float pi = 3.14; //4 bytes -> placeholder f
    double long_pi = 3.1414926358; //8 bytes -> placeholder if
    char letter_grade; // 1 byte -> placeholder c
    char name[] = "Alexa";
    //User input
    printf("What is your grade percentage as a whole number: ");
    scanf("%d", &grade);

    printf("What is your grade number: ");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name); // f stands for format
    printf("You have a %d, in the class. That is an %c\n", grade, letter_grade);
    
    return 0;
}

// %s takes a string variable
// %c takes a single character (char)
// %d takes a double
// grade = 95
// grade = "A"
// Characters (The "A" above) takes up to 1 bytes
// python is a dynamic typed language
// All variables take some amount of space
// C wants to not overuse space
// int grade = 95;
// an int is going to take only up to 4 bytes
// the ; is like a period for this code language
// placeholder for list of characters for a string is s
// scanf is a user input
// & is saying "I want to put this information in this spot"
// in C, everything must be in a funcion, everything needs an int main for it to work
// constant does not exist in python
// a constand in this code is set to put this variable to be unchanged
// \n is for a new line character
// int main is the main funtion, it must include it for it to work and funtion