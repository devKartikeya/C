/*WAP to toggle case of each character in a string*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "KartiKeya";
    for (int i = 0; i < strlen(str); i++)
    {
        char c = str[i];
        if (c >= 'a' && c <= 'z'){
            str[i] = str[i] - 32;
        }
        if (c >= 'A' && c <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    return 0;
}