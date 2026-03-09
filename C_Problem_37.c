/*WAP to find the sum and product of all elements in an array*/

#include <stdio.h>

int main() {
    int sum = 0;
    int product = 1;
    int array[] = {2,4,6,8,10,12};

    for (int i = 0; i < 6; i++)
    {
       sum = sum + array[i];
       product = product * array[i];
    }
    
    printf("The sum of array is %d and product is %d", sum, product);
    return 0;
}