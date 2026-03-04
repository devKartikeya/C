#include <stdio.h>

int main(){
  int arr[] = {20,3,4,5,67,458,34,2,45,4};
  int largest = arr[0];

  for (int i = 1; i < 10; i++){
  if (arr[i] > largest){
     largest = arr[i];
    }
  }
  printf("The largest element is %d", largest);
}