/* WAP to print all the prime numbers between 1 and 100 and also their sum */

#include <stdio.h>

int  checkPrime(int num){
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int count = 0;
    for (int i = 2; i <= 100; i++){
        int res = checkPrime(i);
        if (res) {
            printf("%d is prime ", i);
            count = count + i;
        }
    }
    printf("Sum is %d", count);
    return 0;
}