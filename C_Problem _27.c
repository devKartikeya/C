/*WAP to check whether an Array is Sorted or NOT*/

#include <stdio.h>
#include <string.h>

char* checkSort(int arr[]){
    for (int i = 1; i < 6; i++){
        if (arr[i] < arr[i-1]){
            return "Unsorted";
        }
    }
    return "Sorted";
}

int main(){
    int arr[] = {2,4,6,8,16,12};

    if(strcmp(checkSort(arr), "Sorted") == 0){
        printf("Sorted");
    } else {
        printf("Unsorted");
    }

    return 0;
}
