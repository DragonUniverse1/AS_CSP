// AS 7th Variable practice

int main(){
    char name[50]; // declares character array to store name

    printf("What is your name:\n"); // prompt the user for input

    // read the name using fgets()
    // fgets(buffer, size, stream) reads up to size 1 characters from scteam into buffer
    fgets(name, sizeof(name));

}