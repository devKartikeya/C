/*WAP to swap two numbers */

#include <stdio.h>

void swapByPointers(int* a, int* b){
    int temp;        // normal variable
    temp = *a;       // store value of a
    *a = *b;         // put b into a
    *b = temp;       // put temp into b
    printf("%d %d", a, b);
}

void swapByArithmetic(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}

void swapByXOR(int a, int b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d %d", a, b);
}

int main() {
    int a = 34; 
    int b = 43;
    swapByPointers(&a, &b);
    swapByArithmetic(a, b);
    swapByXOR(a, b);
    return 0;
}
