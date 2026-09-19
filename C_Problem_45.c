/*WAP to print Fibonacci series*/

#include <stdio.h>

void fibonacci(int length){
    int m = 0;
    int n = 1;
    printf("%d %d ", m , n);
    for (int i = m; i <= length; i++){
        int z = m + n;
        printf("%d ", z);
        m = n;
        n = z;
    }
}

int main(){
    int length;
    printf("Enter length of Fibonacci series: ");
    scanf("%d", &length);

    fibonacci(length);
}