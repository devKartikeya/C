/*WAP to sum the numbers coming in multiplication of table of a number*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
       sum += n*i;
    }

printf("%d", sum);
    return 0;
}