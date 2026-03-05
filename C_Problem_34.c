/*WAP to print Full Star Pyramid*/

#include <stdio.h>

int main() {
    int n = 10;

    for(int i = 1; i <= n; i++) {

        // spaces for centering
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // stars
        for(int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
