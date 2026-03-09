/*WAP to implement Binary Search*/

#include <stdio.h>

int main() {
     int array[] = {2, 3, 5, 78, 92, 45, 67, 43, 57, 71};
     int n = 45;

     int start = 0;
     int end = 0;
     int mid = (start + end) / 2;

     for (int i = mid; i < 11; i++)
     {
       if (array[i] == n){
           printf("Number found at %d", i);
           break;
       }
       else if (n > array[i]){
           start = mid + 1;
       }
       else if (n < array[i]){
           end = mid - 1;
       }
     }
     
    return 0;
}