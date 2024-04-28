#include <stdio.h>

// this program takes in command line arguments then displays them
// in order, along with their total quantity


// the main method takes in two parameters: argc, an integer that
// counts the number of arguments that are passed, and argv, 
// a char pointer vector that stores all the arguments

int main(int argc, char* argv[]) {

    // this prints the number of arguments passed by the user
    printf("There are %d command-line arguments\n", argc);

    // in this for-loop, we create an integer called num and
    // assign it a value of 0. We then compare the value of
    // num to argc, and increment num until their values match

    // we use this loop to print out all the command line
    // arguments stored in argv. Since num increments from 0 to
    // argc, we use it to print out the respective index entries
    // in the vector
    for (int num = 0; num < argc; num++) {
        printf("Argument %d: %s\n", num, argv[num]);
    }

    return 0;
}