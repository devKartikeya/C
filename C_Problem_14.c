/*WAP to reverse a String*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char newStr[12];
    int i, j = 0;

    for (i = strlen(str) - 1; i >= 0; i--)
    {
        newStr[j] = str[i];
        j++;
    }
    newStr[11] = '\0';

    printf("%s\n", str);
    printf("%s\n", newStr);
    return 0;
}