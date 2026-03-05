/*WAP to convert decimal into binary*/

#include <stdio.h>

int main() {
    int n = 10;
    int bin;
    int arr[32];   // store binary digits
    int i = 0;

    while (n > 0) {
        bin = n % 2;
        arr[i] = bin;
        i++;
        n = n / 2;
    }

    // print in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    return 0;
}
