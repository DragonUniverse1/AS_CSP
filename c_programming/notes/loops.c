// AS 7th Loops notes
#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5}; // Arrays
    char candies[][20] = {"kitcat", "Skittles", "Nerds", "Hershey", "Twix"}; // [] is how much is in the list

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

        for(int i = 0; i < 5; i++){ // this is a for loop
        printf("%s, is my favorite candy!\n", candies[i]);
        }
        for(int num = 1; num < 11; num++){
            printf("%d\n", num);
        }

        int num = 0;
        while(num < 11){ //this is a while loop
            printf("%d\n", num);
            num++;
        }

    return 0;
}
//What is a loop? 
// a section of code that repeats
//What are the two types of loops?
// for loops and while loops
//What is iteration
// repeating something until it is told to stop; repeats with minor changes each time
//What are arrays? 
// a list or group of items saud in one place
//How do you make lists in C? 
// int nums[] = {1,654,4,56,8,742,5};
//How do you make for loops in C? 
//
//How do you make while loops in C?
// 