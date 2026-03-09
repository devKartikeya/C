/*WAP to check whether a Number is Prime or Not*/

#include <stdio.h>

int checkPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n = 5;
    if (checkPrime(n)) {
        printf("%d is a Prime Number", n);
    } else {
        printf("%d is Not a Prime Number", n);
    }
    return 0;
}