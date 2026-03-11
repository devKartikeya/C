/*WAP to reverse an array in place without using another array*/

#include <stdio.h>

int main() {
    
    int arr[] = {2,4,6,8,10,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = size - 1;

    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
