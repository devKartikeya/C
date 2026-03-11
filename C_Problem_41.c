/*WAP to reverse an array into a new array*/
#include <stdio.h>

int main() {
    int array[] = {2,4,6,8,10,12};
    int newArray[6];
    int index = 0;
    for (int i = 5; i >= 0; i--){
         newArray[index] = array[i];
         index++;
    }
    
    for (int i = 0; i < 6; i++){
        printf("%d\t", newArray[i]);
    }
    return 0;
}
