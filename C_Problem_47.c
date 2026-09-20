/* Find Union of two arrays */

#include <stdio.h>

int main(){
    int arr1[] = {2,3,4,56,34};
    int arr2[] = {2,57,45,3,89};
    int arr3[100];

    int lengthOfArr1 = sizeof(arr1) / sizeof(arr1[0]);
    int lengthOfArr2 = sizeof(arr2) / sizeof(arr2[0]);

    int i, j, k = 0;

    for(i = 0; i < lengthOfArr1; i++){
        arr3[k] = arr1[i];
        k++;
    }

    for(i = 0; i < lengthOfArr2; i++){
        int flag = 0;
        for(j = 0; j < lengthOfArr1; j++){
            if(arr2[i] == arr1[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            arr3[k] = arr2[i];
            k++;
        }
    }

    printf("Union of two arrays is: ");
    for(i = 0; i < k; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}