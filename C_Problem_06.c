/* WAP to check whether a character is Lowercase or not*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char character;
    printf("Enter a character !");
    scanf("%c", &character);

    if (islower(character)){
        printf("%c is lowercase", character);
    } else {
        printf("%c is uppercase", character);
    }
    return 0;
}