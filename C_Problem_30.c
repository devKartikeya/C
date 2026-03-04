/*WAP to find length of String using Pointers*/

#include <stdio.h>

int main() {
    char str[] = "Hello World"; // The string is an array of characters
    char *ptr = str;            // Initialize a pointer to the start of the string
    int length = 0;             // Counter for the length

    // Iterate through the string until the null character is reached
    while (*ptr != '\0') {
        length++; // Increment the counter
        ptr++;    // Move the pointer to the next character
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}
