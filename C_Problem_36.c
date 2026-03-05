/*WAP to convert decimal to hexadecimal*/

#include <stdio.h>

int main() {
    int n = 8674;
    char str[50];
    int i = 0;
    int hex;

    while (n > 0) {
        hex = n % 16;

        if (hex == 10) str[i] = 'A';
        else if (hex == 11) str[i] = 'B';
        else if (hex == 12) str[i] = 'C';
        else if (hex == 13) str[i] = 'D';
        else if (hex == 14) str[i] = 'E';
        else if (hex == 15) str[i] = 'F';
        else str[i] = hex + '0';   // convert number to char

        i++;
        n = n / 16;
    }

    // print reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", str[j]);
    }

    return 0;
}
