/*WAP to count frequency of each element in array*/

#include <stdio.h>

int main() {

    int arr[] = {2,4,3,4,4,5,2,6,7,7,8};
    int count;

    for(int i = 0; i < 11; i++){

        int seen = 0;

        // check if element appeared before
        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                seen = 1;
                break;
            }
        }

        if(seen) continue;

        count = 0;

        for(int j = 0; j < 11; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        printf("Count of %d is %d\n", arr[i], count);
    }

    return 0;
}
