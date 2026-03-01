/*WAP to encrypt a string by adding 1 to the ascii values of each character*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Kartikeya";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i] + 1;
    }
    printf("%s", str);
    return 0;
}