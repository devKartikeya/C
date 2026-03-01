/*WAP to fill an array with random numbers*/

#include <stdio.h>
#include <stdlib.h>

int random(int [], int);

int random(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 20;
    }
    for (int i = 0; i < size; i++)
   {
      printf("%d\n", array[i]);
   }
}

int main() {
    int array[20];
    random(array, 20);
    return 0;
}