/*WAP to implement Linear-Search in array*/

#include <stdio.h>

int linearSearch(int[], int, int);

int linearSearch(int array[], int num, int size)
{
    printf("%d", num);
    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int array[] = {2, 4, 5, 6, 7, 8, 9, 10};
    int num;
    int size = 8;
    printf("Enter a number to be searched !\n");
    scanf("%d", &num);

    int res = linearSearch(array, num, size);
    if (res != 0)
    {
        printf("Number found at %d\n", res);
    }
    else
    {
        printf("Number not found!");
    }
    return 0;
}