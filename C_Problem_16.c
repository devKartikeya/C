/*WAP to make your own strlen() function*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Kartikeya Mishra";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        count++;
    }
    
    printf("%d", count);
    return 0;
}