/*WAP to do sum of first 100 natural numbers*/

#include <stdio.h>

int main() {
    int n = 1;
    int sum = 0;
    while (n < 101)
    {
       sum += n;
       n++;
    }
    printf("%d", sum);
    return 0;
}