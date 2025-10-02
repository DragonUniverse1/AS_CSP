// AS 7th Variables Notes!
#include <stdio.h>

int main(void){
    int grade = 95; //4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = 3.1414926358; //8 bytes
    char letter_grade = 'A'; // 1 byte
    char name[] = "Alexa";
    printf("%s I did it!", name); // f stands for format
    printf("You have a %d, in the class. That is an %c", grade, letter_grade);
    
    return 0;
}

// %s takes a string variable
// %c is single character
// %d is double
// grade = 95
// grade = "A"
// Characters (The "A" above) takes up to 1 bytes
// python is a dynamic typed language
// All variables take some amount of space
// C wants to not overuse space
// int grade = 95;
// an int is going to take only up to 4 bytes
// the ; is like a period but for this code language