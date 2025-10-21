// AS 7th Hello World
#include <stdio.h>

void welcome (char* name){
    printf("Hello, %s!\n", name);
    
    return 0;
}


int main(void){
    welcome("Jeff");
    welcome("Destiny");
    welcome("Pierce");
    welcome("Neven");
    welcome("Alice");

    return 0;
}