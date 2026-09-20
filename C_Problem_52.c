/* WAP to print Pascal's triangle */

/* By Space-optimized method */

#include <stdio.h>

void printPascal(int n) {
    for (int row = 1; row <= n; row++) {
        int c = 1; 
        for (int i = 1; i <= row; i++) {
            printf("%d ", c);
            c = c * (row - i) / i;
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPascal(n);
    return 0;
}   