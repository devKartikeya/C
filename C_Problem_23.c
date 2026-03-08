/*WAP to implement Binary-Search in array*/

#include <stdio.h>

int main()
{
    int array[] = {2, 4, 5, 6, 7, 8, 9, 10};
    int num;
    int size = 8;
    printf("Enter a number to be searched !\n");
    scanf("%d", &num);

    int start = 0;
    int end = 0;
    int mid = (start + end) / 2;
    for (int i = 0; i < 8; i++)
    {
        if (array[i] == num)
        {
            printf("Number found at %d\n", i);
        } else if (num > array[i]){
            start = mid + 1;
        }else if (num < array[i]){
            end = mid - 1;
        }
    }

    return 0;
}
