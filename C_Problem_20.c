/*WAP to count positive numbers in an array*/

#include <stdio.h>
int checkPositive(int[], int);

int checkPositive(int arr[], int n)
{
    int count = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        if (*ptr > 0)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    int array[] = {2, 4, -2, 5, -3, 7, 8, -9, 20, -20};
    int count = checkPositive(array, 10);
    printf("%d", count);
    return 0;
}