/*WAP to Capitalize first character of String manually*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "kartikeya mishra is a very good boy";

    // Capitalize first character manually
    str[0] = toupper(str[0]);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' && str[i+1] != '\0') {
            str[i+1] = toupper(str[i+1]);
        }
    }

    printf("%s", str);

    return 0;
}
