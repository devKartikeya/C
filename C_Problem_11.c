/*WAP to check whether a number is EvenPal*/

#include <stdio.h>

int main()
{
    int num, rev = 0, sum = 0;
    int temp;

    printf("Enter a number !");
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        int d = num % 10;
        rev = (rev * 10) + d;
        sum += d;
        num = num / 10;
    }

    if (sum % 2 == 0 && rev == temp){
        printf("The number is EvenPal");
    } else {
        printf("The number is NOT EvenPal");
    }

    return 0;
}