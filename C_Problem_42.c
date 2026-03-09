/*WAP to implement Linear Search*/

#include <stdio.h>

int main() {
    int array[] = {2, 3, 5, 78, 92, 45, 67, 43, 57, 71};
    int n = 45;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == n){
            printf("Number found at %d", i);
            break;
        }
    }
    
    return 0;
}