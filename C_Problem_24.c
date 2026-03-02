/*WAP to count the words in a string*/
#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char str[] = " Kartikeya Mishra is a very good boy";
    for(int i = 0; i < strlen(str); i++){
        if (str[i] == ' '){
            count++;
        }
    }
    printf("The number of words are %d", count);
    return 0;
}
