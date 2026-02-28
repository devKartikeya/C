/*WAP to calculate factorial of a number*/
#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter a number");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    printf("%d", factorial);
    return 0;
}