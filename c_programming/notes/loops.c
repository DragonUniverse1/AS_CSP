// AS 7th Loops notes
#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5}; // Arrays
    char candies[][20] = {"kitcat", "Skittles", "Nerds", "Hershey", "Twix"}; // [] is how much is in the list

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

        for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy!\n", candies[i]);
        }
        for(int num = 1; num < 11; num++){
            printf("%d\n", num);
        }

        int num = 0;
        while(num < 11){
            printf("%d\n", num);
            num++;
        }

    return 0;
}
//What is a loop? 
//
//What are the two types of loops?
//
//What is iteration
// one instants of the loop
//What are arrays? 
// just lists in python
//How do you make lists in C? 
// int nums[] = {1,654,4,56,8,742,5};
//How do you make for loops in C? 
//
//How do you make while loops in C?
//