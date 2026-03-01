/*WAP to check whether a character is present or not in a string*/

#include <stdio.h>
#include <string.h>

int check(char [], char);

int check(char str[], char c){
    for (int i = 0; i < strlen(str); i++)
    {
       if (str[i] == c){
           return 1;
       }
    }
    return 0;
}

int main() {
    char str[] = "Kartikeya";
    char c = 'b';

    int result = check(str, c);
    if (result == 1){
        printf("%s", "Character found !");
    }else {
        printf("%s", "Character NOT found !");
    }
    return 0;
}